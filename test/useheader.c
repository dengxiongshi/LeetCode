//
// Created by 邓熊狮 on 2021/5/17 10:34.
//
#include <stdio.h>
#include "names_st.h"

int main(void) {
    names candidate;

    get_names(&candidate);
    printf("Let's welcome ");
    show_names(&candidate);
    printf(" to this programe!\n");
    return 0;
}