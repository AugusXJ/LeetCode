# 409. Self Dividing Numbers
---------

## Description
A self-dividing number is a number that is divisible by every digit it contains.

For example, 128 is a self-dividing number because `128 % 1 == 0`, `128 % 2 == 0`, and `128 % 8 == 0`.

Also, a self-dividing number is not allowed to contain the digit zero.

Given a lower and upper number bound, output a list of every possible self dividing number, including the bounds if possible.

**Example 1:**

```cpp
Input: 
left = 1, right = 22
Output: [1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 15, 22]
```
**Note:**

- The boundaries of each input argument are `1 <= left <= right <= 10000`.

## 思路
**考察点：** 数字整除
**目标：** 找出给定区间里所有的self-dividing number
**方案：** 这题很简单，重点是如何判断一个数字是self-dividing number，按照定理判断即可。然后把符合要求的number `append`到一个list中区。

code: [click here](solution_1.py)