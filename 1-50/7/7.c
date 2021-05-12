#include <stdio.h>
#include <limits.h>
#include <math.h>

int reverse(int x) {
//    int test = abs(x);
//    int t = test;
    long rev = 0;
    while (x != 0) {
        int pop = x % 10;
        x /= 10;
        if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
        if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
        rev = rev * 10 + pop;

    }
    return (int) rev == rev ? (int) rev : 0;
//    int result[count];
//    for (int i = 0; i < count; i++) {
//        test = t % 10;
//        result[i] = test;
//        t = t / 10;
//    }
//    int sum;
//    for (int i = 0; i < count; i++) {
//        sum += pow(10, i) * result[i];
//    }
//    if (x == 0) {
//        printf("%d\n", 0);
//    }
//    if (x < 0) {
//        printf("%d\n", -sum);
//    } else {
//        printf("%d\n", sum);
//    }

}

int main() {
    int x;
    printf("请输入不超过32位的有符号整数：");
    scanf("%d", &x);
    printf("%d\n", reverse(x));
    return 0;
}