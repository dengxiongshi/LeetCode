//
// Created by Administrator on 2021/5/7.
//
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <malloc.h>
#include <ctype.h>

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
bool isValid(char *s) {
    int len = strlen(s);
//    printf("%d\n", len);
    if (len == 0 || (len % 2) != 0) {
        return 0;
    }

    char *pr = (char *) malloc(len / 2);
    memset(pr, 0, len / 2);
    int a = 0;
    for (int i = 0; i < len; i++) {
        if ((*(s + i) == '(') || (*(s + i) == '[') || (*(s + i) == '{')) {
            a++;
            *(pr + a) = *(s + i);
        } else if ((*(s + i) == (*(pr + a) + 1)) || (*(s + i) == (*(pr + a) + 2))) {
            a--;
        } else {
            return 0;
        }
    }
    if (a)
        return 0;
    return 1;

}

//bool isValid(char *s) {
//    int len = strlen(s);
//    if (len == 0 || (len % 2) != 0) {
//        return 0;
//    }
//    int t = len / 2;
//    while (t > 0) {
//        replace(s, "()", "");
//        replace(s, "[]", "");
//        replace(s, "{}", "");
//        t--;
//    }
////    if (s != NULL) {
////        if (strlen(s) == 0) {
////            return 1;
////        } else {
////            return 0;
////        }
////    } else
////        return 1;
//    if (s[0]) {
//        return 1;
//    } else {
//        return 0;
//    }
//}

int main() {
    char *s = "[]{}()";
    printf("%d\n", isValid(s));
//    isValid(s);
    return 0;
}

