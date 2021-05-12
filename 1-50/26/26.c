//
// Created by Administrator on 2021/5/11.
//
#include <stdio.h>

int removeDuplicates(int *nums, int numsSize) {
    if (numsSize <= 1)
        return numsSize;

    int j = 0;
    for (int i = 1; i < numsSize; i++) {
        if (nums[j] != nums[i])
            nums[++j] = nums[i];
    }
    return j + 1;
}



//int removeDuplicates(int *nums, int numsSize) {
//    if (numsSize <= 1)
//        return numsSize;
//
//    int i = 0, j = 1;
//    while (j < numsSize) {
//        if (nums[i] == nums[j]) {
//            j++;
//        } else {
//            i++;
//            nums[i] = nums[j];
//            j++;
//        }
//    }
//    return i + 1;
//}

int main() {
    int nums[] = {1, 1, 2, 4, 9, 15, 15, 17};
    int numsSize = sizeof(nums) / sizeof(*nums);
    printf("%d\n", removeDuplicates(nums, numsSize));
    return 0;
}


