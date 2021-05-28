#include <stdio.h>
#include <iostream>
#include <math.h>
#include <vector>

#define MONTHS 12

using namespace std;

//template<typename T>
//void print_num(const T num) {
//    cout.setf(ios::showpoint);
//    cout << num << endl;
//}

template<typename T0>
struct NUM {
    NUM(const vector<T0> &vec) : num1(vec[0]), num2(vec[1]) {}

    template<typename T>
    void print_sum(const T &num) {
        cout.setf(ios::showpoint);
        cout << num + num1 + num2<< endl;
    }

    const T0 num1;
    const T0 num2;
};

void *memcpy(void *dst, void *src, size_t size) {
    char *psrc;
    char *pdst;

    if (NULL == dst || NULL == src) {
        return NULL;
    }

    if ((src < dst) && (char *) src + size > (char *) dst) // 出现地址重叠的情况，自后向前拷贝
    {
        psrc = (char *) src + size - 1;
        pdst = (char *) dst + size - 1;
        while (size--) {
            *pdst-- = *psrc--;
        }
    } else {
        psrc = (char *) src;
        pdst = (char *) dst;
        while (size--) {
            *pdst++ = *psrc++;
        }
    }

    return dst;
}

int main() {
    vector<double> r1 = {1.0, 2.0};
    int nn = 3;
    NUM<double> num(r1);
    num.print_sum(nn);

//    int num1 = 1;
//    print_num(num1);
//    double num2 = 1.0;
//    print_num(num2);
//    long long num3 = 1e10;
//    print_num(num3);

    char a[10] = "abcdefgh";
    unsigned n = 2;
    void *p = memcpy(a + 3, a, n * sizeof(char));
//    for (char i : a) {
//        printf("%c ", i);
//    }
    printf("%p\n", p);

    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;
    for (index = 0; index < MONTHS; index++) {
        printf("Month %2d has %2d days.\n", index + 1, days[index]);
    }
    return 0;
}

