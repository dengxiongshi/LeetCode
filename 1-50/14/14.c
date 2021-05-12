//
// Created by Administrator on 2021/5/6.
//
#include <stdio.h>
#include <string.h>

/*截取src字符串中,从下标为start开始到end-1(end前面)的字符串保存在dest中(下标从0开始)*/
char *substring(char *dest, char *src, int start, int end) {
    int i = start;
    if (start > strlen(src))return "\0";
    if (end > strlen(src))
        end = strlen(src);
    while (i < end) {
        dest[i - start] = src[i];
        i++;
    }
    dest[i - start] = '\0';
    return dest;
}

//char *longestCommonPrefix(char **strs, int strsSize) {
//    if (strlen(*strs) == 0)
//        return "\0";
//    if (strlen(*strs) == 1)
//        return strs[0];
//
//    char *sum;
//    char *t = strs[0];
//    for (int i = 0; i < strlen(t); i++) {
//        char ch = strs[0][i];
//        for (int j = 0; j < strsSize; j++) {
//            if (i == strlen(strs[j]) || strs[j][i] != ch)
//                return substring(sum, strs[0], 0, i);
//        }
//    }
//    return t;
//
//}

char *longestCommonPrefix(char **strs, int strsSize) {
    int i = 0;
    int count = 0;
    if (strsSize == 0)
        return "\0";

    while (*(strs[0] + count)) {
        for (i = 1; i < strsSize; i++) {
            if (*(strs[0] + count) != *(strs[i] + count)) {
                *(strs[0] + count) = '\0';
                return strs[0];
            }
        }
        count++;
    }
    return strs[0];
}

//int main() {
//    int size = 3;
//    char **strs;
//    strs[0] = *(char **) "flower";
//    strs[1] = *(char **) "flow";
//    strs[2] = *(char **) "flight";
//    printf("%s\n", longestCommonPrefix(strs, size));
//    return 0;
//}
int main(int argc, char **argv) {
    printf("%s\n", longestCommonPrefix(argv + 1, argc - 1));
    return 0;
}