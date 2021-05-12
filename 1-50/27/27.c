//
// Created by Administrator on 2021/5/11.
//

#include <stdio.h>

int removeElement(int *nums, int numsSize, int val) {
//    if (numsSize <= 1)
//        return numsSize;

    int j = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[j] = nums[i];
            j++;
        }
    }
    return j;

}

int main() {
    int nums[] = {0, 1, 2, 2, 3, 0, 4, 2};
    int numsSize = sizeof(nums) / sizeof(*nums);
    int val = 2;
    printf("%d", removeElement(nums, numsSize, val));
    return 0;
}

