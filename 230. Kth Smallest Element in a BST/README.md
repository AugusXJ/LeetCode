# 230. Kth Smallest Element in a BST
---------

## Description
Given a binary search tree, write a function kthSmallest to find the kth smallest element in it.

**Note: **
You may assume k is always valid, 1 ≤ k ≤ BST's total elements.

**Example 1:**

	Input: root = [3,1,4,null,2], k = 1
	Output: 1
**Example 2:**

	Input: root = [5,3,6,2,4,null,null,1], k = 3
	Output: 3
**Follow up:**
What if the BST is modified (insert/delete operations) often and you need to find the kth smallest frequently? How would you optimize the kthSmallest routine?

## 思路
**考察点：**二叉树的查找方法
**目标：**在二叉树中查找第k小的树
**方案：**root的左子树要小与root的值，右子树大于root的值。因此可以计算root左子树的节点数量c，并与k进行比较。
- 若`c == k+1`，说明结果就是root
- 若`c > k+1`，说明结果在root的左子树，那么问题转化成以root->left作为新的root进行查找，同样是第k小的。
- 若`c < k+1`，说明结果在root的右子树，那么对root->right进行查找，查找的rank要减去`(c+1)`，即`k-c-1`。

code: [click here](solution_1.cpp)