//
// Created by Administrator on 2021/5/10.
//
#include <stddef.h>
#include <stdio.h>
#include <malloc.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

int GetMyListLen(struct ListNode *pHeadNode) {
    struct ListNode *pListNodeTmp = pHeadNode;
    int iLen = 0;

    // 判断是否有链表输入
    if (pHeadNode == NULL) {
        fprintf(stderr, "There is no list.\n");
        return -1;
    }

    // 获得长度
    while (pListNodeTmp != NULL) {
        iLen++;
        pListNodeTmp = pListNodeTmp->next;
    }
    return iLen;
}

struct ListNode *mergeTwoLists(struct ListNode *l1, struct ListNode *l2) {
    if (l1 == NULL)
        return l2;
    if (l2 == NULL)
        return l1;
    if (l1->val < l2->val) {
        l1->next = mergeTwoLists(l1->next, l2);
        return l1;
    } else {
        l2->next = mergeTwoLists(l2->next, l1);
        return l2;
    }
}

int main() {
    struct ListNode l1, l2;
//    int a[] = {1,2,4};
//    int b[] = {1,3,4};
//    l1 = (ListNode)malloc(sizeof(struct ListNode));
//    l2 = (struct ListNode *)malloc(sizeof(struct ListNode));
//    struct ListNode *p1, *p2, *s1, *s2;
//    l1->next = NULL;
//    l2->next = NULL;
//    s1 = l1;
//    s2 = l2;
//
//    for (int i = 0; i < 3; i++) {
//        p1 = (struct ListNode *)malloc(sizeof(struct ListNode));
//        p1->val = a[i];
//        p1->next = s1->next;
//        s1->next = p1;
//        s1 = s1->next;
//    }
//    for (int j = 0; j < 3; j++) {
//        p2 = (struct ListNode *)malloc(sizeof(struct ListNode));
//        p2->val = b[j];
//        p2->next = s2->next;
//        s1->next = p2;
//        s2 = s2->next;
//    }
    l1.val = 2;
    l1.next = NULL;
    l2.val = 3;
    l2.next = NULL;
    struct ListNode *l3 = mergeTwoLists(&l1, &l2);
    while (l3 != NULL) {
        printf("%d ", l3->val);
        l3 = l3->next;
    }
    return 0;

}