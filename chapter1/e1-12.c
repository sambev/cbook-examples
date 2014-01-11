#include "stdio.h"

#define IN = 1
#define OUT = 0

int main(int argc, char const *argv[])
{
    // Write a program that prints its input one word per line.
    long c;

    while((c = getchar()) != EOF) {
        if (c == '\n' || c == ' ' || c == '\t') {
            putchar('\n');
        } else {
            putchar(c);
        }
    }
    return 0;
}