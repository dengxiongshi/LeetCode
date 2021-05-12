//
// Created by Administrator on 2021/4/21.
//
#include "stdio.h"
#include "string.h"

int numDecodings(char *s) {
    int len = strlen(s);
//    if (len == 0 || (len == 1 && s[0] == '0'))
//        return 0;
//
//    int dp[len + 1];
//    dp[0] = 1;
//    int count = 0; //统计解码的个数
//    for (int i = 0; i < len; ++i) {
//        dp[i + 1] = s[i] == '0' ? 0 : dp[i];
//        if (i > 0 && (s[i - 1] == '1' || (s[i - 1] == '2' && s[i] <= '6')))
//            dp[i + 1] += dp[i - 1];
//
//    }
//    return dp[len - 1];
    int a = 0, b = 1, c;
    for (int i = 1; i <= len; ++i) {
        c = 0;
        if (s[i - 1] != '0') {
            c += b;
        }
        if (i > 1 && s[i - 2] != '0' && ((s[i - 2] - '0') * 10 + (s[i - 1] - '0') <= 26)) {
            c += a;
        }
        a = b, b = c;
    }
    return c;
}

int main() {
//    char *s = '12';
    char *s;
    printf("输入编码数：");
    scanf("%c\n", &s);
    int n = numDecodings(s);
    printf("解码个数：%d\n", n);
    return 0;
}