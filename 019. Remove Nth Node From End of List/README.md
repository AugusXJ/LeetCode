# 019. Remove Nth Node From End of List
------------

## Description
Given a linked list, remove the nth node from the end of list and return its head.

For example,

	Given linked list: 1->2->3->4->5, and n = 2.
	
	After removing the second node from the end, the linked list becomes 1->2->3->5.
**Note**:
Given n will always be valid.
Try to do this in one pass.


## 解题思路
题目要求移除链表中倒数n个数，并返回首元素。考察的是基本的链表删除操作，因为需要倒数第n个数，且单向链表不能从后往前读取数据，所以这里我先求出链表的总体长度，再定为到指定元素进行删除操作。
> 若删除的是首元素，需要返回第二个元素的指针。

code: [point here](solution_1.cpp)