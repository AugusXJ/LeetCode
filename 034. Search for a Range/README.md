# 034. Search for a Range
------

## Description
Given an array of integers sorted in ascending order, find the starting and ending position of a given target value.

Your algorithm's runtime complexity must be in the order of O(log n).

If the target is not found in the array, return `[-1, -1]`.

For example,
Given `[5, 7, 7, 8, 8, 10]` and target value 8,
return `[3, 4]`.

## 思路
- 要求：在O(log n)的复杂度内，在一个有序数组中查找target value，并返回该值索引的最小和最大值。

看到复杂度为O(log n)就大致想到了二分查找，比如题目给出的例子中，我们需要查找`8`，那么我们找到`8`的下界和`9`的下界就可以得到结果，找下界的方法可以使用二分查找。

code: [click here](solution_1.cpp)