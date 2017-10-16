# 021. Merge Two Sorted Lists
-------------

## Description
Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.

## 解题思路
将两个有序的链表进行合并，得到一个新的链表。运用分治递归的思想，详细见代码。
- 分解： 比较两个链表的首元素，取出较小值，并对剩余链表进行排序。
- 合并：使用较小值的`next`指向子问题的结果。

code: [point here](solution_1.cpp)