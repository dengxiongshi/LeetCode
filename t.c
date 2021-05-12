#include <stdio.h>

int fun(char *);

//inta;
//char str[] = "abcdefghijklmn";
//a = fun(str);

int fun(char *s) {
    int num = 0;
    for (int i = 0;;) {
        num += *s;
        s++;
    }
    return num;
}

int main() {
    char str[] = "abcdefghijklmn";
//    int a = fun(str);
    printf("%d\n", fun(str));
}