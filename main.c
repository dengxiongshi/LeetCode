#include <stdio.h>
#include "test.c"

int count ;
extern void write();

int main()
{
    count = 5;
    write();
}