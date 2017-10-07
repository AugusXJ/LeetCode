# 008. String to Integer (atoi)
------------------------------------------------

## Description
Implement atoi to convert a string to an integer.

Hint: Carefully consider all possible input cases. If you want a challenge, please do not see below and ask yourself what are the possible input cases.

Notes: It is intended for this problem to be specified vaguely (ie, no given input specs). You are responsible to gather all the input requirements up front.



**Requirements for atoi:**
The function first discards as many whitespace characters as necessary until the first non-whitespace character is found. Then, starting from this character, takes an optional initial plus or minus sign followed by as many numerical digits as possible, and interprets them as a numerical value.

The string can contain additional characters after those that form the integral number, which are ignored and have no effect on the behavior of this function.

If the first sequence of non-whitespace characters in str is not a valid integral number, or if no such sequence exists because either str is empty or it contains only whitespace characters, no conversion is performed.

If no valid conversion could be performed, a zero value is returned. If the correct value is out of the range of representable values, INT_MAX (2147483647) or INT_MIN (-2147483648) is returned


## 解题思路
这题目很坑爹，根本没说明白，试了N次之后才通过。 题目大致需要一个string，找到第一个`'+'`或者`-`或者`数字，并取之后**连续**的数字子串。
类似于

`" 　　　　　　12  3"` - >> `12`

知道要求的话解题就很简单了，找到第一个满足条件的字符，再以此往下读数字字符，若非数字字符就跳出。另外注意要写个判断不能溢出。

code: [point here](solution_1.cpp)
