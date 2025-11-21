#ifndef __TEST_H
#define __TEST_H

#include <iostream>
#include <stdlib.h>
using namespace std;

struct ListNode {
    int val;
    struct ListNode* next;
};


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2);

#endif // !__TEST_H





