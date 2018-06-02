## 669. Trim a Binary Search Tree 

### Description

Given a binary search tree and the lowest and highest boundaries as `L` and `R`, trim the tree so that all its elements lies in `[L, R]` (R >= L). You might need to change the root of the tree, so the result should return the new root of the trimmed binary search tree.

**Example 1:**

```
Input: 
    1
   / \
  0   2

  L = 1
  R = 2

Output: 
    1
      \
       2
```

**Example 2:**

```
Input: 
    3
   / \
  0   4
   \
    2
   /
  1

  L = 1
  R = 3

Output: 
      3
     / 
   2   
  /
 1
```

### Solution

**考察点**：二叉查找树

**思路：**

1. 如果root在[L, R]之间，那么返回root，并对其孩子进行剪枝。
2. 如果root小与L，则返回root.right并判断其是否需要剪枝。
3. 如果root大于R，则返回root.left并判断其是否需要剪枝。

[python_solution](solution_1.py)