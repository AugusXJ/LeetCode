# 020. Valid Parentheses
------------

## Description
Given a string containing just the characters `'(', ')'`, `'{', '}'`, `'['` and `']'`, determine if the input string is valid.

The brackets must close in the correct order, `"()"` and `"()[]{}"` are all valid but `"(]"` and `"([)]"` are not.

## 解题思路
题目需要括号对称，对于每一个右括号需要找到最近的左括号与其对应，这与`stack`的思想非常相似，因此此题使用`stack`来处理。
- 第一步：取变量`i`为`string`的索引并初始化为0。
- 第二部：判断`string`索引`i`处的字符，如果为左括号则入栈，若为右括号则在`stack`中找首元素是否为对应的左括号，若是则移除该左括号，若不是则返回`false`。
- 第三步：增加`i`的值，如果超出`string`的范围，则判断`stack`是否为空，如是则返回`true`，否则返回`false`。若未超出，增加`i`并返回第二步。

code: [point here](solution_1.cpp)