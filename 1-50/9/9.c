//
// Created by Administrator on 2021/4/28.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0))
        return false;

    char string[] = {0};
    itoa(x, string, 10);
    int len = strlen(string) - 1;
    int p = 0;
    while (p < len) {
        if (string[p] != string[len])
            return false;
        p++;
        len--;
    }
    return true;
//    if (x < 0 || (x % 10 == 0 && x != 0))
//        return false;
//
//    int rev = 0;
//    while (x > rev) {
//        rev = rev * 10 + x % 10;
//        x /= 10;
//    }
//    return x == rev || x == rev / 10;
//    int max = 0x7fffffff;
//    int test = x;
//    if (x < 0)
//        return false;
//
//    int len = 0, p = 0;
//    while (x != 0) {
//        p = x % 10;
//        len = len * 10 + p;
//        x = x / 10;
//    }
//    if (len > max)
//        return false;
//    return test == len;
//    if (test == len) {
//        return true;
//    }
//    int sum[len];
//    int i = 0;
//    while (test != 0) {
//        int p = test % 10;
//        sum[i] = p;
//        i++;
//        test = test / 10;
//    }
//    for (int j = 0, m = len; j < len / 2, m > len / 2; j++, m--) {
//        if (sum[j] != sum[m])
//            return false;
//    }
//    return true;
}

int main() {
    int x = 1234567899;
    printf("%d\n", isPalindrome(x));
    return 0;
}