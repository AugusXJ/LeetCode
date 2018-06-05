## 557. Reverse Words in a String III 

### Description

Given a string, you need to reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

**Example 1:**

```
Input: "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"
```

**Note:** In the string, each word is separated by single space and there will not be any extra space in the string.

### Solution

**考察点：** 字符串

**方案：** 先分割字符串，翻转，再合并。

[solution_1.py](solution_1.py)