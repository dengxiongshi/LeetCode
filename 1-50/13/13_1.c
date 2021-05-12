//
// Created by Administrator on 2021/4/30.
//

#include <stdio.h>
#include <string.h>
#include "..\str\str.h"

/*将str1字符串中第一次出现的str2字符串替换成str3*/
void replaceFirst(char *str1, char *str2, char *str3) {
    char str4[strlen(str1) + 1];
    char *p;
    strcpy(str4, str1);
    if ((p = strstr(str1, str2)) != NULL)/*p指向str2在str1中第一次出现的位置*/
    {
        while (str1 != p && str1 != NULL)/*将str1指针移动到p的位置*/
        {
            str1++;
        }
        str1[0] = '\0';/*将str1指针指向的值变成/0,以此来截断str1,舍弃str2及以后的内容，只保留str2以前的内容*/
        strcat(str1, str3);/*在str1后拼接上str3,组成新str1*/
        strcat(str1, strstr(str4, str2) +
                     strlen(str2));/*strstr(str4,str2)是指向str2及以后的内容(包括str2),strstr(str4,str2)+strlen(str2)就是将指针向前移动strlen(str2)位，跳过str2*/
    }
}

/*将str1出现的所有的str2都替换为str3*/
void replace(char *str1, char *str2, char *str3) {
    while (strstr(str1, str2) != NULL) {
        replaceFirst(str1, str2, str3);
    }
}

int getValue(char c) {
    switch (c) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        case 'a':
            return 4;
        case 'b':
            return 9;
        case 'c':
            return 40;
        case 'd':
            return 90;
        case 'e':
            return 400;
        case 'f':
            return 900;
        default:
            return 0;
    }
}

int romanToInt(char *s) {
    int len = strlen(s);
    int sum = 0;
    if (len < 1 || len > 15)
        return 0;

    replace(s, "IV", "a");
    replace(s, "IX", "b");
    replace(s, "XL", "c");
    replace(s, "XC", "d");
    replace(s, "CD", "e");
    replace(s, "CM", "f");

    for (int i = 0; i < len; i++) {
        sum += getValue(s[i]);
    }
    return sum = (sum < 1 || sum > 3999) ? 0 : sum;
}

int main() {
    char *s = "LVIII";
    int mm = romanToInt(s);
    printf("%d\n", mm);
    return 0;
}