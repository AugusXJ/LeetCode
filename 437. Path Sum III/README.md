# 437. Path Sum III

------

## Description

You are given a binary tree in which each node contains an integer value.

Find the number of paths that sum to a given value.

The path does not need to start or end at the root or a leaf, but it must go downwards (traveling only from parent nodes to child nodes).

The tree has no more than 1,000 nodes and the values are in the range -1,000,000 to 1,000,000.

**Example:**

```
root = [10,5,-3,3,2,null,11,3,-2,null,1], sum = 8

      10
     /  \
    5   -3
   / \    \
  3   2   11
 / \   \
3  -2   1

Return 3. The paths that sum to 8 are:

1.  5 -> 3
2.  5 -> 2 -> 1
3. -3 -> 11
```



## 思路

**考察点：**树查找
**目标：**找出两节点间的距离和为sum的数量，两节点必须为从上至下
**方案：** 问题可以转化为以某一节点为根节点，到剩余子节点距离和为sum的个数，遍历所以节点就能得到答案。



code: [click here](solution_1.py)