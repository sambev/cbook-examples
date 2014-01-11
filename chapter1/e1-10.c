#include "stdio.h"

int main(int argc, char const *argv[])
{
    /* Write a program to copy its input to its output, replacing each tab by
    \t, each backspace by \b, and each backslash by \\. This makes tabs and
    backspaces visible in an unambiguous way.*/

    int count = 0;
    long c;
    while((c = getchar()) != EOF) {
        if (c == '\t') {  // tabs
            putchar('\\');
            putchar('t');
        } else if (c == '\b') { // backspaces (couldn't get to work)
            putchar('\\');
            putchar('b');
        } else if (c == '\\') { // slash
            putchar('\\');
            putchar('\\');
        } else {
            putchar(c);
        }
    }
    printf("%d\n", count);
    return 0;
}