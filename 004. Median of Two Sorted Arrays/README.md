# 004. Median of Two Sorted Arrays
------------------------------------------------

## Description
There are two sorted arrays nums1 and nums2 of size m and n respectively.

Find the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)).

## Example

Example 1:
```
nums1 = [1, 3]
nums2 = [2]

The median is 2.0
```
Example 2:
```
nums1 = [1, 2]
nums2 = [3, 4]

The median is (2 + 3)/2 = 2.5
```

## 解题思路一
将两个`vector`进行合并，然后再找中位数就好，但是这样复杂度达不到要求。

### Result
code: [Point Here](solution_1.cpp)