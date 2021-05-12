#include <malloc.h>
#include "uthash.h"
#include "stdio.h"

struct hashTable {
    int key;
    int val;
    UT_hash_handle hh;
};

struct hashTable *hashtable;

struct hashTable *find(int ikey) {
    struct hashTable *tmp;
    HASH_FIND_INT(hashtable, &ikey, tmp);
    return tmp;
}

void insert(int ikey, int ival) {
    struct hashTable *it = find(ikey);
    if (it == NULL) {
        struct hashTable *tmp = malloc(sizeof(struct hashTable));
        tmp->key = ikey, tmp->val = ival;
        HASH_ADD_INT(hashtable, key, tmp);
    } else {
        it->val = ival;
    }
}

int *twoSum(int *nums, int numsSize, int target, int *returnSize) {
//    nums[numsSize];
//    int len = sizeof(nums) / sizeof(nums[0]);
//    int returnSize[2];
    hashtable = NULL;
    for (int i = 0; i < numsSize; i++) {
        struct hashTable *it = find(target - nums[i]);
        if (it != NULL) {
            int *ret = malloc(sizeof(int) * 2);
            ret[0] = it->val, ret[1] = i;
            *returnSize = 2;
            return ret;
        }
        insert(nums[i], i);
    }
    *returnSize = 0;
    return NULL;
}

int main(void) {
    int nums[] = {2, 7, 11, 15};
    int size = sizeof(nums) / sizeof(nums[0]);
    int target = 9;
    int count = 0;
    int *indexes = twoSum(nums, size, target, &count);
    if (indexes != NULL) {
        printf("%d %d\n", indexes[0], indexes[1]);
    } else {
        printf("Not found\n");
    }

    return 0;
}