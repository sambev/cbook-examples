#include "stdio.h"

int main(int argc, char const *argv[])
{
    /* copy input to output replacing each stirng of one or more blanks by a
    single blank */
    int c;
    int last_char;

    while((c = getchar()) != EOF) {
        if (c == ' ' && c == last_char) {
            continue;
        } else {
            putchar(c);
            last_char = c;
        }
    }
    return 0;
}