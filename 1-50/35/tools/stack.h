//
// Created by 邓熊狮 on 2021/5/12 16:43.
//

#ifndef LEETCODE_STACK_H
#define LEETCODE_STACK_H

#include <string.h> /* memcpy() */

#ifndef STACK_INIT_SIZE
#define STACK_INIT_SIZE 64
#endif

#define PUSH(c, v)        do { *(context *)stackPush(c, sizeof(context)) = (v);} while (0)
#define PUSHC(c, v)       do { *(char *)stackPush(c, sizeof(char)) = (v); } while (0)
#define PUSHI(c, v)       do { *(int *)stackPush(c, sizeof(int)) = (v); } while (0)
#define PUSHD(c, v)       do { *(double *)stackPush(c, sizeof(double)) = (v); } while (0)
#define PUSHCP(c, v)      do { *(char **)stackPush(c, sizeof(char*)) = (v); } while (0)

#define PUSHS(c, s, len)  do { if (len > 0) memcpy(stackPush(c, len), s, len); } while (0)

typedef struct {
    char *stack;
    size_t size, top;
} context;

context stackMake(void);
void *stackPush(context *c, size_t size);
void *stackPop(context *c, size_t size);

#endif //LEETCODE_STACK_H
