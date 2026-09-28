#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Regenerate the root README.md from the solution files themselves.

Each solution's banner comment is the single source of truth, so there is no
database to keep in step and nothing to fetch over the network:

    /*====================================================
     *  LeetCode 11 - Container With Most Water
     *  --------------------------------------------------
     *  Difficulty   : Medium
     *  Topics       : Array, Two Pointers, Greedy
     *  Link         : https://leetcode.com/problems/...
     *
     *  Approach     : Two pointers from both ends...
     *  Time         : O(n)
     *  Space        : O(1)
     ...

Add a problem by creating `NNNN-slug/` with a solution carrying that banner,
then run:

    python tools/sync.py

Author  : K MOHITH KANNAN  (github.com/Mohith535)
License : MIT - (c) K MOHITH KANNAN
"""

from __future__ import annotations

import collections
import os
import re
import sys
from urllib.parse import quote

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

AUTHOR    = "K MOHITH KANNAN"
HANDLE    = "Mohith535"
REPO_NAME = "leetcode"
REPO_URL  = f"https://github.com/{HANDLE}/{REPO_NAME}"
PORTFOLIO = "https://mohith535.github.io/portfolio/"
LINKEDIN  = "https://linkedin.com/in/mohith53"
EMAIL     = "promohith535@gmail.com"

DIFF_COLOR = {"Easy": "00b8a3", "Medium": "ffb800", "Hard": "ff375f"}
DIFF_DOT   = {"Easy": "\U0001F7E9", "Medium": "\U0001F7E8", "Hard": "\U0001F7E5"}
DIFF_ORDER = ["Easy", "Medium", "Hard"]

LANGS = [(".c", "C"), (".py", "Python"), (".java", "Java"), (".cpp", "C++")]


# --------------------------------------------------------------------- parse
def field(text: str, name: str) -> str:
    m = re.search(rf"^\s*\*\s*{name}\s*:\s*(.+?)\s*$", text, re.M)
    return m.group(1).strip() if m else ""


def load_problems() -> list[dict]:
    problems = []
    for entry in sorted(os.listdir(ROOT)):
        folder = os.path.join(ROOT, entry)
        if not (os.path.isdir(folder) and re.match(r"^\d{4}-", entry)):
            continue

        sources = {}
        for ext, label in LANGS:
            hit = [f for f in sorted(os.listdir(folder)) if f.endswith(ext)]
            if hit:
                sources[label] = hit[0]
        if "C" not in sources:
            print(f"  ! {entry}: no .c file, skipped", file=sys.stderr)
            continue

        head = open(os.path.join(folder, sources["C"]), encoding="utf-8").read()[:2000]
        m = re.search(r"LeetCode\s+(\d+)\s*[-—]\s*(.+?)\s*$", head, re.M)
        if not m:
            print(f"  ! {entry}: banner not recognised, skipped", file=sys.stderr)
            continue

        num, slug = entry.split("-", 1)
        problems.append(dict(
            id=int(m.group(1)),
            title=m.group(2).strip(),
            folder=entry,
            slug=slug,
            difficulty=field(head, "Difficulty") or "Medium",
            topics=[t.strip() for t in field(head, "Topics").split(",") if t.strip()],
            approach=field(head, "Approach"),
            time=field(head, "Time"),
            space=field(head, "Space"),
            sources=sources,
        ))
    problems.sort(key=lambda p: p["id"])
    return problems


# ------------------------------------------------------------------- render
def bar(done: int, total: int, width: int = 22) -> str:
    filled = round(width * done / total) if total else 0
    return "█" * filled + "░" * (width - filled)


def typing_svg(lines: list[str]) -> str:
    joined = quote(";".join(lines), safe="")
    return ("https://readme-typing-svg.demolab.com?font=Fira+Code&weight=600&size=19"
            "&pause=1200&color=1F6FEB&center=true&vCenter=true&width=760&height=46"
            f"&lines={joined}")


def banner(total: int, counts: collections.Counter) -> str:
    desc = quote(f"{AUTHOR} — pointers, not libraries", safe="")
    return ("https://capsule-render.vercel.app/api?type=waving"
            "&color=0:0d1117,55:1f6feb,100:00b8a3&height=190&section=header"
            "&text=LeetCode%20in%20C&fontSize=54&fontColor=ffffff&fontAlignY=34"
            f"&animation=fadeIn&desc={desc}&descAlignY=57&descSize=15")


def badge(label: str, value: str, color: str, logo: str = "") -> str:
    l = quote(label, safe="").replace("-", "--")
    v = quote(value, safe="").replace("-", "--")
    extra = f"&logo={logo}&logoColor=white" if logo else ""
    return (f"https://img.shields.io/badge/{l}-{v}-{color}"
            f"?style=for-the-badge&labelColor=0d1117{extra}")


def build_readme(problems: list[dict]) -> str:
    total  = len(problems)
    counts = collections.Counter(p["difficulty"] for p in problems)
    topics = collections.Counter(t for p in problems for t in p["topics"])
    langs  = collections.Counter(l for p in problems for l in p["sources"])
    lo, hi = problems[0]["id"], problems[-1]["id"]

    O = []
    A = O.append

    # ---------------------------------------------------------- header
    A('<div align="center">')
    A("")
    A(f'<img src="{banner(total, counts)}" width="100%" alt="LeetCode in C" />')
    A("")
    A(f'<a href="https://github.com/{HANDLE}">')
    A(f'  <img src="{typing_svg([f"{total} problems solved in pure C",
                                f"{counts['Easy']} Easy · {counts['Medium']} Medium · {counts['Hard']} Hard",
                                "Zero warnings at -O2 -Wall -Wextra",
                                f"Every line reasoned out by {AUTHOR.title()}"])}" alt="stats" />')
    A("</a>")
    A("")
    A(f'<a href="https://github.com/{HANDLE}"><img src="{badge("Author", AUTHOR.title(), "0d1117", "github")}" alt="author" /></a>'
      f'&nbsp;<img src="{badge("Language", "C", "A8B9CC", "c")}" alt="C" />'
      f'&nbsp;<img src="{badge("Solved", str(total), "1f6feb")}" alt="solved" />'
      f'&nbsp;<img src="{badge("Warnings", "0", "00b8a3")}" alt="warnings" />'
      f'&nbsp;<a href="./LICENSE"><img src="{badge("License", "MIT", "6e7681")}" alt="MIT" /></a>')
    A("")
    A(f'<a href="{PORTFOLIO}"><img src="{badge("Portfolio", "mohith535.github.io", "0d1117", "googlechrome")}" alt="portfolio" /></a>'
      f'&nbsp;<a href="{LINKEDIN}"><img src="{badge("LinkedIn", "K Mohith Kannan", "0A66C2", "linkedin")}" alt="linkedin" /></a>')
    A("")
    A("```")
    A("            Can Do It.")
    A("```")
    A("")
    A("</div>")
    A("")
    A("---")
    A("")

    # ------------------------------------------------------------ intro
    A("## The point")
    A("")
    A("LeetCode in **C** — no STL, no `HashMap`, no garbage collector to hide behind.")
    A("Every stack, every window, every `malloc` is written out by hand, because the")
    A("data structure you had to build yourself is the one you actually understand.")
    A("")
    A(f"Solutions for problems **{lo}–{hi}**, each in its own folder with the problem")
    A("statement, the reasoning, and the complexity written down next to the code.")
    A("")
    A("---")
    A("")

    # ------------------------------------------------------------ stats
    A("## At a glance")
    A("")
    A("| | Solved | Share | |")
    A("|:--|--:|--:|:--|")
    for d in DIFF_ORDER:
        n = counts.get(d, 0)
        pct = 100 * n / total if total else 0
        A(f"| {DIFF_DOT[d]} **{d}** | {n} | {pct:.0f}% | `{bar(n, total)}` |")
    A(f"| ⬛ **Total** | **{total}** | 100% | `{bar(total, total)}` |")
    A("")
    A(f"**{len(topics)}** distinct topics · "
      f"**{sum(langs.values())}** solution files · "
      + " · ".join(f"**{v}** in {k}" for k, v in langs.most_common()))
    A("")
    A("---")
    A("")

    # ------------------------------------------------------------ index
    A("## Index")
    A("")
    A("| # | Problem | Difficulty | Approach | Time | Space | Code |")
    A("|--:|:--|:--|:--|:--|:--|:--|")
    for p in problems:
        idea = p["approach"]
        if len(idea) > 62:
            idea = idea[:59].rstrip(" ,.;") + "…"
        code = " ".join(f"[`{lab}`](./{p['folder']}/{f})" for lab, f in p["sources"].items())
        A(f"| {p['id']} "
          f"| [{p['title']}](./{p['folder']}/) "
          f"| {DIFF_DOT[p['difficulty']]} {p['difficulty']} "
          f"| {idea} "
          f"| `{p['time']}` "
          f"| `{p['space']}` "
          f"| {code} |")
    A("")
    A(f"> Every row links to a folder containing the problem statement, the approach,")
    A(f"> and the annotated source. Written and owned by **{AUTHOR}**.")
    A("")
    A("---")
    A("")

    # ----------------------------------------------------------- topics
    A("## Topic tags")
    A("")
    A("<details>")
    A(f"<summary><b>{len(topics)} tags across {total} problems</b> — click to expand</summary>")
    A("")
    A("These are LeetCode's own tags for each problem, so they also name techniques")
    A("a problem *can* be solved with — `Manacher`, `Trie`, `Knuth–Morris–Pratt`. The")
    A("approach column in the index above is what my code actually does.")
    A("")
    A("| Topic | Problems | |")
    A("|:--|--:|:--|")
    for name, n in topics.most_common():
        ids = ", ".join(f"[{p['id']}](./{p['folder']}/)" for p in problems if name in p["topics"])
        A(f"| **{name}** | {n} | {ids} |")
    A("")
    A("</details>")
    A("")
    A("---")
    A("")

    # ----------------------------------------------------------- layout
    A("## Layout")
    A("")
    A("```")
    A(f"{REPO_NAME}/")
    A("├─ README.md                  ← generated by tools/sync.py")
    A("├─ LICENSE                    ← MIT, in my name")
    A("├─ leetcode.h                 ← shim so the files compile locally")
    A("├─ tools/sync.py              ← rebuilds this README from the sources")
    A("│")
    for p in problems[:2]:
        A(f"├─ {p['folder']}/")
        A(f"│   ├─ {p['sources']['C']}")
        A(f"│   └─ README.md              ← statement + approach + complexity")
    A("│")
    A(f"└─ … {total - 2} more, one folder per problem")
    A("```")
    A("")
    A("One folder per problem, so a second language drops in beside the first with")
    A("nothing to rename:")
    A("")
    A("```")
    A(f"{problems[0]['folder']}/")
    A(f"├─ {problems[0]['sources']['C']}")
    A(f"├─ {problems[0]['folder']}.py     ← next")
    A("└─ README.md")
    A("```")
    A("")
    A("---")
    A("")

    # ------------------------------------------------------------ verify
    A("## Verify it yourself")
    A("")
    A("Every file pastes straight into the LeetCode editor unchanged — the judge")
    A("supplies `struct ListNode`, so the solutions never redeclare it. `leetcode.h`")
    A("exists only so the same files can be checked on your own machine:")
    A("")
    A("```bash")
    A("# one solution")
    A(f"gcc -std=c17 -Wall -Wextra -fsyntax-only -include leetcode.h {problems[0]['folder']}/{problems[0]['sources']['C']}")
    A("")
    A("# all of them, warnings treated as the bar to clear")
    A('for f in [0-9]*/*.c; do')
    A('    gcc -std=c17 -O2 -Wall -Wextra -c -include leetcode.h "$f" -o /dev/null || echo "FAIL $f"')
    A("done")
    A("```")
    A("")
    A(f"All {total} files compile clean at `-O2 -Wall -Wextra` — zero errors, zero warnings.")
    A("")
    A("---")
    A("")

    # ----------------------------------------------------------- roadmap
    A("## Roadmap")
    A("")
    A(f"- [x] Problems {lo}–{hi} in C — **{total} solved**")
    A("- [ ] Python solution beside each C file, same folder")
    A("- [ ] Keep walking forward from 36")
    A("")
    A("---")
    A("")

    # ------------------------------------------------------------ author
    A('<div align="center">')
    A("")
    A("## The author")
    A("")
    A(f"### {AUTHOR}")
    A("")
    A("**B.Tech CSE (AI & ML) · SRMIST Kattankulathur · Class of 2027**")
    A("")
    A("Chennai, Tamil Nadu, India")
    A("")
    A("*I don't build apps. I build systems.*")
    A("")
    A(f'<a href="https://github.com/{HANDLE}"><img src="{badge("GitHub", HANDLE, "181717", "github")}" alt="github" /></a>'
      f'&nbsp;<a href="{PORTFOLIO}"><img src="{badge("Portfolio", "Visit", "0d1117", "googlechrome")}" alt="portfolio" /></a>'
      f'&nbsp;<a href="{LINKEDIN}"><img src="{badge("LinkedIn", "Connect", "0A66C2", "linkedin")}" alt="linkedin" /></a>'
      f'&nbsp;<a href="mailto:{EMAIL}"><img src="{badge("Email", "Say hi", "D14836", "gmail")}" alt="email" /></a>')
    A("")
    A("</div>")
    A("")
    A("---")
    A("")

    # ---------------------------------------------------------- license
    A("## License & ownership")
    A("")
    A(f"Every solution in this repository was reasoned out and written by **{AUTHOR}**.")
    A("Released under the [MIT License](./LICENSE) — free to read, learn from and reuse,")
    A("with attribution retained.")
    A("")
    A(f"> © {AUTHOR} · [github.com/{HANDLE}]({REPO_URL})")
    A("")
    A('<div align="center">')
    A("")
    A(f'<img src="https://capsule-render.vercel.app/api?type=waving&color=0:00b8a3,55:1f6feb,100:0d1117&height=110&section=footer" width="100%" alt="" />')
    A("")
    A("</div>")
    A("")
    return "\n".join(O)


def main() -> int:
    problems = load_problems()
    if not problems:
        print("no problem folders found", file=sys.stderr)
        return 1
    out = os.path.join(ROOT, "README.md")
    with open(out, "w", encoding="utf-8", newline="\n") as fh:
        fh.write(build_readme(problems))
    counts = collections.Counter(p["difficulty"] for p in problems)
    print(f"README.md rebuilt — {len(problems)} problems "
          f"({counts['Easy']}E / {counts['Medium']}M / {counts['Hard']}H)")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
