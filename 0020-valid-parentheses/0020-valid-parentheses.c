/*==========================================================================
 *  LeetCode 20 — Valid Parentheses
 *  ------------------------------------------------------------------------
 *  Difficulty   : Easy
 *  Topics       : String, Stack, Bracket Sequences
 *  Link         : https://leetcode.com/problems/valid-parentheses/
 *
 *  Approach     : Push openers on a stack; every closer must match the most recent one.
 *  Time         : O(n)
 *  Space        : O(n)
 *
 *  Author       : K MOHITH KANNAN  (github.com/Mohith535)
 *  Portfolio    : https://mohith535.github.io/portfolio/
 *  Repository   : https://github.com/Mohith535/leetcode
 *  License      : MIT — © K MOHITH KANNAN. Written by hand, not generated.
 ==========================================================================*/

#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool isValid(char* s) {
    int n = strlen(s);
    char *stack = malloc(n * sizeof(char));
    int top = -1;

    for (int i = 0; i < n; i++) {
        char c = s[i];

        if (c == '(' || c == '[' || c == '{') {
            stack[++top] = c;
        }
        else {
            if (top == -1) {
                free(stack);
                return false;
            }

            char open = stack[top--];

            if ((c == ')' && open != '(') ||
                (c == ']' && open != '[') ||
                (c == '}' && open != '{')) {
                free(stack);
                return false;
            }
        }
    }

    bool result = (top == -1);
    free(stack);

    return result;
}    
