# 026. Remove Duplicates from Sorted Array
---------

## Description
Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this in place with constant memory.

For example,
Given input array nums = `[1,1,2]`,

Your function should return length = `2`, with the first two elements of nums being 1 and 2 respectively. It doesn't matter what you leave beyond the new length.

## 思路
很简单的一道题，遍历`vector`并找到与前一位值相同的位置，并使用`vector`的`erase`删除掉即可。注意`erase()`返回删除元素下一位的地址。

code: [point here](solution_1.cpp)