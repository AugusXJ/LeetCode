# 617. Merge Two Binary Trees
---------

## Description
Given two binary trees and imagine that when you put one of them to cover the other, some nodes of the two trees are overlapped while the others are not.

You need to merge them into a new binary tree. The merge rule is that if two nodes overlap, then sum node values up as the new value of the merged node. Otherwise, the NOT null node will be used as the node of new tree.

Example 1:
Input: 

	Tree 1                     Tree 2                  
          1                         2                             
         / \                       / \                            
        3   2                     1   3                        
       /                           \   \                      
      5                             4   7                  
Output: 
Merged tree:

	     3
	    / \
	   4   5
	  / \   \ 
	 5   4   7
Note: The merging process must start from the root nodes of both trees.

## 思路
因为合并一个节点之后需要合并该节点的左右子树，所以这题使用递归的方法去做。有几个点需要做特殊处理：

- 合并位置处，`Tree1`有节点而`Tree2`没有。
	> 在`Tree2`处创建一个值为0的节点，这样处理不会影响输出树的值。

- 若两棵树在该位置均不存在节点
	> 该位置不做处理。

code: [click here](solution_1.cpp)