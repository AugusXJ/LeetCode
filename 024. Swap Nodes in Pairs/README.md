# 024. Swap Nodes in Pairs
-------------

## Description
Given a linked list, swap every two adjacent nodes and return its head.

For example,
Given `1->2->3->4`, you should return the list as `2->1->4->3`.

Your algorithm should use only constant space. You may not modify the values in the list, only nodes itself can be changed.

## 解题思路
题目要求每两个数进行交换，那么以两个数为一组进行考虑，设第一个数为a，第二个数为b，函数返回第二个数的指针。a的next可用递归的思想，因为函数的返回值是一个交换过的指针链表。

	a->b->c->d
	改变为：
	b->a->swapPairs()
	其中swapPairs() 返回-d->c->nullptr

code: [point here](solution_1.cpp)

