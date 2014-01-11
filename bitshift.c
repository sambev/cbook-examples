#include "stdio.h"

int main(int argc, char const *argv[])
{
    unsigned char color[4];
    unsigned long n = 175;

    color[0] = (n >> 24) & 0xFF;
    color[1] = (n >> 16) & 0xFF;
    color[2] = (n >> 8) & 0xFF;
    color[3] = n & 0xFF;

    printf("%x %x %x %x\n", (unsigned char)color[0],
                        (unsigned char)color[1],
                        (unsigned char)color[2],
                        (unsigned char)color[3]);
    return 0;
}