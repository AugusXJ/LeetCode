# 007. Reverse Integer
------------------------------------------------

## Description&&Examples
Reverse digits of an integer.

Example1: x = 123, return 321
Example2: x = -123, return -321


<font color = 'red'> 
Note:
The input is assumed to be a 32-bit signed integer. Your function should return 0 when the reversed integer overflows. </font>

## 解题思路
这道题目不难，使用`%10`一位一位取数，然后再设置一个变量`x10`把取出的数加入，再写个判断是否溢出就好了。

code: [Point Here](solution_1.cpp)