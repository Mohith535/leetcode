/*==========================================================================
 *  LeetCode 13 — Roman to Integer
 *  ------------------------------------------------------------------------
 *  Difficulty   : Easy
 *  Topics       : Hash Table, Math, String
 *  Problem      : https://leetcode.com/problems/roman-to-integer/
 *
 *  Approach     : Single pass; subtract a numeral when a larger one follows it.
 *  Time         : O(n)
 *  Space        : O(1)
 *
 *  Author       : K MOHITH KANNAN  (github.com/Mohith535)
 *  Solved as    : https://leetcode.com/u/Mohith535/
 *  Portfolio    : https://mohith535.github.io/portfolio/
 *  Repository   : https://github.com/Mohith535/leetcode
 *  License      : MIT — © K MOHITH KANNAN. Written by hand, not generated.
 ==========================================================================*/

int romanToInt(char* s) {
    int total = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        int curr = 0, next = 0;

        switch (s[i]) {
            case 'I': curr = 1; break;
            case 'V': curr = 5; break;
            case 'X': curr = 10; break;
            case 'L': curr = 50; break;
            case 'C': curr = 100; break;
            case 'D': curr = 500; break;
            case 'M': curr = 1000; break;
        }

        if (s[i + 1] != '\0') {
            switch (s[i + 1]) {
                case 'I': next = 1; break;
                case 'V': next = 5; break;
                case 'X': next = 10; break;
                case 'L': next = 50; break;
                case 'C': next = 100; break;
                case 'D': next = 500; break;
                case 'M': next = 1000; break;
            }
        } else {
            next = 0;
        }

        if (curr < next)
            total -= curr;
        else
            total += curr;
    }

    return total;
}
