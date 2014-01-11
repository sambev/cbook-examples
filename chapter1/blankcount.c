#include "stdio.h"

int main(int argc, char const *argv[])
{
    // count tabs, white space and new lines for Exercise 1-8 in The C Programming Language
    int count = 0;
    long c;
    while((c = getchar()) != EOF) {
        if (c == '\t') {  // tabs
            count++;
        } else if (c == '\n') { // new lines
            count++;
        } else if (c == ' ') { // white space
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}