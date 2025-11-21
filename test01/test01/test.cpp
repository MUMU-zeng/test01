#include "test.h"


/*函数名：addTwoNumbers
 *函数功能：返回一个保存两个链表之和的新链表首地址
 *函数参数：
 *    l1：链表1
 *   l2：链表2
 *返回值：两个链表之和组成的链表
 */
 
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* result, *first_address;
    result = (struct ListNode*)malloc(sizeof(struct ListNode));
	result->next = NULL;
    int ten_bit = 0;
    first_address = result;
    
	while (l1 != NULL || l2 != NULL || ten_bit) { // 当两个链表都为空且没有进位时结束
        
        //result->val = l1->val + l2->val + ten_bit;  //计算当前值
		//result->val = (l1 ? (l1->val + (l2 ? l2->val : 0)) : ((l2 ? l2->val : 0))) + ten_bit;
        if (l1 == NULL && l2 == NULL) {
            result->val = ten_bit;
        }
        else if (l1 == NULL) {
            result->val = ten_bit + l2->val;
        }
        else if (l2 == NULL) {
            result->val = ten_bit + l1->val;
        }
        else {
            result->val = l1->val + l2->val + ten_bit;
        }
	    ten_bit = 0;    // 进位清零
        if (result->val >= 10) // 进位
        {
            result->val -= 10;
            ten_bit = 1;
        }
		l1 = l1 ? l1->next : NULL; // 移动到下一个节点
		l2 = l2 ? l2->next : NULL; // 移动到下一个节点

		if (l1 || l2 || ten_bit)    //还有没算完的，继续创建下一个节点
        {
            result->next = (struct ListNode*)malloc(sizeof(struct ListNode)); // 创建下一个节点
            result = result->next;
			result->next = NULL;
        }

    }
	result->next = NULL; // 结束链表
	return first_address;
}


