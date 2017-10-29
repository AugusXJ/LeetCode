# 031. Next Permutation
---------

## Description
Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.

If such arrangement is not possible, it must rearrange it as the lowest possible order (ie, sorted in ascending order).

The replacement must be in-place, do not allocate extra memory.

Here are some examples. Inputs are in the left-hand column and its corresponding outputs are in the right-hand column.

	1,2,3 → 1,3,2
	3,2,1 → 1,2,3
	1,1,5 → 1,5,1

## 思路
题目给定一个数组A，需要重新排列这些数字达到比该数组大一级别的数组。
重点在与改变第几位数字，我们肯定从低位开始，因为改变越低位对整体大小的影响就越小，也就达到了所谓的大一级（否则可能比原数组大，但是大了很多）。
我们从个位往前遍历，假设位数为i，那么我们从i位之前找一个比A[i]大的数，并对两者进行交换，再对i位之前的数按从小到大进行排序（为了保持最小）。

code: [click here](solution_1.cpp)