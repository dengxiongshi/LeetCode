//
// Created by 邓熊狮 on 2021/5/17 10:19.
//
#include <string.h>
#define SLEN 32

struct names_st {
    char first[SLEN];
    char last[SLEN];
};

typedef struct names_st names;

// 函数原型
void get_names(names *);
void show_names(const names *);
char * s_gets(char * st, int n);


