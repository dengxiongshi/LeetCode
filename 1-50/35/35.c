//
// Created by Administrator on 2021/5/12.
//


#include <stdio.h>
#include "test.h"
#include "array.h"

//int searchInsert(int *nums, int numsSize, int target) {
//    if (numsSize == 0)
//        return 0;
//
//    for (int i = 0; i < numsSize; i++) {
//        if (nums[i] == target) {
//            return i;
//        } else if (nums[numsSize - 1] < target) {
//            return numsSize;
//        } else if (nums[0] > target) {
//            return 0;
//        } else if (nums[i] > target) {
//            return i;
//        }
//    }
//
//}

//int searchInsert(int* nums, int numsSize, int target){
//    for (int i = 0; i < numsSize; i++) {
//        if (nums[i] >= target)
//            return i;
//    }
//    return numsSize;
//}

int searchInsert(int* nums, int numsSize, int target){
    int low = 0, high = numsSize - 1;
    while (low <= high) {
        int mid = (high + low) / 2;
        if (nums[mid] > target) {
            high = mid - 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else{
            return mid;
        }
    }
    return low;
}

void test(int expect, const char *nums, int target) {
    arrayEntry *e = arrayParse1D(nums, ARRAY_INT);

    EXPECT_EQ_INT(expect, searchInsert(arrayValue(e), arraySize(e), target));

    arrayFree(e);
}

int main(void) {
    test(2, "[1,3,5,6]", 5);
    test(1, "[1,3,5,6]", 2);
    test(4, "[1,3,5,6]", 7);
    test(0, "[1,3,5,6]", 0);

    return testOutput();
}
