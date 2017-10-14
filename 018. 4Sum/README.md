# 018. 4Sum
------------

## Description
Given an array S of n integers, are there elements a, b, c, and d in S such that a + b + c + d = target? Find all unique quadruplets in the array which gives the sum of target.

**Note**: The solution set must not contain duplicate quadruplets.

	For example, given array S = [1, 0, -1, 0, -2, 2], and target = 0.
	
	A solution set is:
	[
	  [-1,  0, 0, 1],
	  [-2, -1, 1, 2],
	  [-2,  0, 0, 2]
	]

## 解题思路
和[3Sum][S15]题目思路差不多，多加了两句判断属性
```cpp
if (*it + *(it + 1) + *(it + 2) + *(it + 3) > target) break;
if (*it + *(nums.end() - 1) + *(nums.end() - 2) + *(nums.end() - 3) < target) continue;
```
用这两句话可以减少时间复杂度，首先对数组进行排序。
- 在选择第一个数`*it`时，如果加上最小的三个数仍然大于`target`那么这种情况下增大`it`就更不可能等于`target`了。
- 如果加上最大的三个数仍然小于`target`,说明如果选择了`*it`就达不到等于`target`的要求，故需要增大`it`。

code:[point here](solution_1.cpp)













[S15]:../015.%203Sum