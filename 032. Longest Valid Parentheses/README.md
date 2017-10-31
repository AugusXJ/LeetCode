# 032. Longest Valid Parentheses
--------

## Description
Given a string containing just the characters `'('` and `')'`, find the length of the longest valid (well-formed) parentheses substring.

For `"(()"`, the longest valid parentheses substring is `"()"`, which has length = 2.

Another example is `")()())"`, where the longest valid parentheses substring is `"()()"`, which has length = 4.

## 思路
- 题目要求：给定一个只包含左右括号的字符串，找到最大的**合格**(即左右括号可配对）子字符串。

题目要求找最大符合要求的子字符串，那么问题可转化为找到所有符合要求的子字符串，然后比较取最大值。那么问题就变成如何去找符合要求的字符串。
- 寻找满足要求的字符串
比如说字符串s为`")()())"`，我们可以发现`s[0]`和`s[5]`是异常的，因为没有括号和它们配对，如果我们找到这两个异常的位置，然后两者之间的字符串不就是符合要求的字符串了吗。那么问题就再简化为寻找特殊的位置。
- 寻找特殊位置：可以使用`stack`来存放括号的索引位置，并且消除掉配对好的左右括号，那么`stack`留下来的就是异常括号的索引。

确定好之后就可以记录两个异常位置之间子字符串的长度，并比较大小返回最大值。

code: [click here](solution_1.cpp)