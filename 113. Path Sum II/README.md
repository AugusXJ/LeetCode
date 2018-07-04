## 113. Path Sum II

### Descriptions

Given a binary tree and a sum, find all root-to-leaf paths where each path's sum equals the given sum.

**Note:** A leaf is a node with no children.

**Example:**

Given the below binary tree and `sum = 22`,

```python
      5
     / \
    4   8
   /   / \
  11  13  4
 /  \    / \
7    2  5   1
```

Return:

```python
[
   [5,4,11,2],
   [5,8,4,5]
]
```

### Solution

**思路**： 使用递归的思想，一个点的return为其左右子节点的return中每个list加上本身。

**代码**： [code](solution1.py)