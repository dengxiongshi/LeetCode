//
// Created by 邓熊狮 on 2021/5/17 14:05.
//
#ifndef NAMES_H_
#define NAMES_H_

// 明示常量
#define SLEN 32

// 结构声明
typedef struct names_st {
    char first[SLEN];
    char last[SLEN];
} names;

// 类型定义
//typedef struct names_st names;

// 函数原型
void get_names(names *);
void show_names(const names *);
char * s_gets(char * st, int n);

#endif
