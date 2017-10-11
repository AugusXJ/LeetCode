# 016. 3Sum Closest
------------

## Description
Given an array S of n integers, find three integers in S such that the sum is closest to a given number, target. Return the sum of the three integers. You may assume that each input would have exactly one solution.

```cpp
For example, given array S = {-1 2 1 -4}, and target = 1.

The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
```

## 解题思路
这一题和上一题的思路大致相同，不同的是因为这题答案唯一，所以不用考虑重复的问题了，那只会降低代码的可读性。固定一个数c之后，使得数字a和b取最小和最大值，然后往中间逼近。更新过程中的最接近值`closestNum`，最后返回结果。

code: [point here](solution_1.cpp)