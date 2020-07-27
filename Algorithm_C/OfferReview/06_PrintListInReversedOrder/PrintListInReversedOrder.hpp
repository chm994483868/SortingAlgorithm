//
//  PrintListInReversedOrder.hpp
//  OfferReview
//
//  Created by CHM on 2020/7/27.
//  Copyright © 2020 CHM. All rights reserved.
//

#ifndef PrintListInReversedOrder_hpp
#define PrintListInReversedOrder_hpp

#include <stdio.h>
#include <stack>

namespace PrintListInReversedOrder {

struct ListNode {
    int m_nValue;
    ListNode* m_pNext;
};

// 开局的两个小题
// 往链表末尾添加一个节点
void addToTail(ListNode** pHead, int value);
// 在链表中找到第一个含有某值的节点并删除该节点的代码
void removeNode(ListNode** pHead, int value);

// 6：从尾到头打印链表
// 题目：输入一个链表的头结点，从尾到头反过来打印出每个结点的值。
void printListReversingly_Iteratively(ListNode* pHead);
void printListReversingly_Recursively(ListNode* pHead);

// 辅助函数
ListNode* CreateListNode(int value);
void ConnectListNodes(ListNode* pCurrent, ListNode* pNext);
void PrintListNode(ListNode* pNode);
void PrintList(ListNode* pHead);
void DestroyList(ListNode* pHead);

// 测试代码
void Test(ListNode* pHead);
// 1->2->3->4->5
void Test1();
// 只有一个结点的链表: 1
void Test2();
// 空链表
void Test3();

void Test();

}

#endif /* PrintListInReversedOrder_hpp */