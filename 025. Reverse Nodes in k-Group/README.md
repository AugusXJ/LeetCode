# 025. Reverse Nodes in k-Group
-------

## Description
Given a linked list, reverse the nodes of a linked list k at a time and return its modified list.

k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes in the end should remain as it is.

You may not alter the values in the nodes, only nodes itself may be changed.

Only constant memory is allowed.

For example,
Given this linked list: `1->2->3->4->5`

For k = 2, you should return: `2->1->4->3->5`

For k = 3, you should return: `3->2->1->4->5`

## 解题思路
此题和上一题的大体思路相同，都是使用递归，说一下几个特别得点。
1. 当剩余数量不足k个时不进行反转，所以我们需要在反转一组数据时先判断剩余数量的数据，若小于k直接返回head指针。
2. 对一组数据内的指针改变：设立了一个函数`getNnext(ListNode*,int)`，表示头指针第n个next的指针，这样子我们只需要迭代的将头指针之后第n个指针的`next`指向头指针之后第n-1个指针，n从k-1遍历到1即可。

code: [click here](solution_1.cpp)