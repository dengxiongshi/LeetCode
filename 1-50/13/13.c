/**
 Created by Administrator on 2021/4/29 15:32
**/
#include <stdio.h>
#include <string.h>
//#include <map.h>

#define nI 1
#define nV 5
#define nX 10
#define nL 50
#define nC 100
#define nD 500
#define nM 1000
//map<string, int>

int romanToInt(char *s) {
//    hash = {'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000};
//    int len = strlen(s);
//    int sum = 0;
//    if (len < 1 || len > 15)
//        return 0;
//
//    for (int i = 0; i < len; i++) {
//        switch (s[i]) {
//            case 'I':
//                sum = sum + 1;
//                break;
//            case 'V':
//                sum = sum + 5;
//                break;
//            case 'X':
//                sum = sum + 10;
//                break;
//            case 'L':
//                sum = sum + 50;
//                break;
//            case 'C':
//                sum = sum + 100;
//                break;
//            case 'D':
//                sum = sum + 500;
//                break;
//            case 'M':
//                sum = sum + 1000;
//                break;
//            default:
//                printf("default");
//                break;
//        }
//
//        if (i != 0) {
//            if (((s[i] == 'V') || (s[i] == 'X')) && (s[i - 1] == 'I'))
//                sum = sum - 1 * 2;
//            if (((s[i] == 'L') || (s[i] == 'C')) && (s[i] == 'X'))
//                sum = sum - 10 * 2;
//            if (((s[i] == 'D') || (s[i] == 'M')) && (s[i] == 'C'))
//                sum = sum - 100 * 2;
//        }
//    }
    int sum = 0, flag = 0;

    while (*s != NULL) {
        if (*s == 'I' && (*(s + 1) == 'V' || *(s + 1) == 'X')) {
            flag = 1;

            switch (*(s + 1)) {
                case 'V':
                    sum += (nV - nI);
                    s += 2;
                    break;
                case 'X':
                    sum += (nX - nI);
                    s += 2;
                    break;
            }
        }
        if (*s == 'X' && (*(s + 1) == 'L' || *(s + 1) == 'C')) {
            flag = 1;
            switch (*(s + 1)) {
                case 'L':
                    sum += (nL - nX);
                    s += 2;
                    break;
                case 'C':
                    sum += (nC - nX);
                    s += 2;
                    break;
            }
        }
        if (*s == 'C' && (*(s + 1) == 'D' || *(s + 1) == 'M')) {
            flag = 1;
            switch (*(s + 1)) {
                case 'D':
                    sum += (nD - nC);
                    s += 2;
                    break;
                case 'M':
                    sum += (nM - nC);
                    s += 2;
                    break;
            }
        }
        if (flag == 0)   //本来这里是else的，改为if(flag == 0)
        {
            switch (*s) {
                case 'I':
                    sum += nI;
                    s += 1;
                    break;
                case 'V':
                    sum += nV;
                    s += 1;
                    break;
                case 'X':
                    sum += nX;
                    s += 1;
                    break;
                case 'L':
                    sum += nL;
                    s += 1;
                    break;
                case 'C':
                    sum += nC;
                    s += 1;
                    break;
                case 'D':
                    sum += nD;
                    s += 1;
                    break;
                case 'M':
                    sum += nM;
                    s += 1;
                    break;
            }
        }
        flag = 0;
    }
    return sum = (sum < 1 || sum > 3999) ? 0 : sum;
}

int main() {
    char *x = "MCMXCIV";
    printf("%d\n", romanToInt(x));
    return 0;
}