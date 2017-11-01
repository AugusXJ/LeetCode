# 033. Search in Rotated Sorted Array
------

## Description
Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

(i.e., `0 1 2 4 5 6 7` might become `4 5 6 7 0 1 2`).

You are given a target value to search. If found in the array return its index, otherwise return -1.

You may assume no duplicate exists in the array.

## 思路
这一题我直接用查找了...，显然题目不应该这么做，用到旋转了可以使用查找树的结构进行，但是貌似没大必要。

code: [click here](solution_1.cpp)