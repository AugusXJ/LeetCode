# 561. Array Partition I
------

## Description
Given an array of 2n integers, your task is to group these integers into n pairs of integer, say (a1, b1), (a2, b2), ..., (an, bn) which makes sum of min(ai, bi) for all i from 1 to n as large as possible.

**Example 1:**
	Input: [1,4,3,2]
	
	Output: 4
	Explanation: n is 2, and the maximum sum of pairs is 4 = min(1, 2) + min(3, 4).
**Note:**

	n is a positive integer, which is in the range of [1, 10000].
	All the integers in the array will be in the range of [-10000, 10000].

## 思路
题目需要min(a,b)尽可能大，那就使得a和b的值差距变小。
很简单，排序，然后每两位取一个数。
code: [click here](solution_1.cpp)
