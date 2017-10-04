# 005. Longest Palindromic Substring
------------------------------------------------

## Description
Given a string s, find the longest palindromic substring in s. You may assume that the maximum length of s is 1000.

## Examples
Example:
```
Input: "babad"

Output: "bab"
```
Note: "aba" is also a valid answer.
Example:
```
Input: "cbbd"

Output: "bb"
```

## 解题思路
首先用了一种类似枚举的方法，有点蠢，遍历每个字符，寻找之前和该字符相等处的位置，并将两个位置之间的字符串做次判断是否回文，然后再找最大的。 如果碰到类似`aaaaaaaaaaaaaaaaaaaaaa`这种字符串速度变得好慢。

code: [point here](solution_1.cpp)