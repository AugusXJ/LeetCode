# 028. Implement strStr()
----------

## Description
Implement strStr().

Returns the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

## 解题思路
> 对于两个`string`s1和s2，判断s2在s1中的位置，如果s2不在s1中则返回-1。

遍历s1,找到与s2首字符相同的字符，记录位置索引k，再判断之后的字符与s2是否相同，若是返回k，否则从k+1出继续遍历。

code: [click here](solution_1.cpp)