#include <stdio.h>

extern int count;

void write(void)
{
    printf("count is %d\n", count);
}