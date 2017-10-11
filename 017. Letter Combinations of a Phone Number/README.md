# 017. Letter Combinations of a Phone Number
----------

## Descritpion
Given a digit string, return all possible letter combinations that the number could represent.

A mapping of digit to letters (just like on the telephone buttons) is given below.

![](exp.png)
```cpp
Input:Digit string "23"
Output: ["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"].
```

**Note**:
Although the above answer is in lexicographical order, your answer could be in any order you want.

## 解题思路
由题目知，一个数字对应于多个字符，假设数字i对应的字符数量为Ni,那么对于一个m个字符的输入，则共有N1+N2+...+Ni+...+Nm个字符，我们对输入的每个字符进行分别处理。
比如说输入`234`：
1. 处理`2`：得到结果`'a','b','c'`
2. 处理`3`：复制2的结果并分别在后面加上`def`，得到结果为`'ad','bd','cd','ae','be','ce','af','bf','cf'`。
3. 处理`4`：重复上述步骤得到结果。

code: [point here](solution_1.cpp)

