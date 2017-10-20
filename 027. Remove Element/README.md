# 027. Remove Element
-------

## Description
Given an array and a value, remove all instances of that value in place and return the new length.

Do not allocate extra space for another array, you must do this in place with constant memory.

The order of elements can be changed. It doesn't matter what you leave beyond the new length.

## 解题思路
删除数组中的指定元素，遍历数组，再用`erase`删除即可。

code: [point here](solution_1.cpp)