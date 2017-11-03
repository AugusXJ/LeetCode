# 461. Hamming Distance
---------

## Description
The Hamming distance between two integers is the number of positions at which the corresponding bits are different.

Given two integers x and y, calculate the Hamming distance.

Note:
0 ≤ x, y < 231.

Example:

	Input: x = 1, y = 4
	
	Output: 2
	
	Explanation:
	1   (0 0 0 1)
	4   (0 1 0 0)
	       ↑   ↑

The above arrows point to positions where the corresponding bits are different.

## 思路
题目要求找两个`int`整数二进制位上不同的个数，使用异或`^`操作获取不同位数的位置上为1的数n，再使用`n &=n-1`获取对应位置上不同的个数。

解释：
Considering this example. Let's say n = 10101, and dist = 0 asccording to above code of @pengr7.

- Before we go into the `whil`e loop. `n = 10101, dist = 0`
- Loop 1. `dist = 1, n =10101 & 10100 = 10100`
- Loop 2. `dist = 2, n =10100 & 10011 = 10000`
- Loop 3. `dist = 3, n =10000 & (0)1111 = 0`
- Loop ends. `dist = 3`
The change of `n` :
- `10101`
- `10100`
- `10000`
- `00000`
Conclusion: n & (n-1) converts the right most 1 to 0 .
This is the key idea solving the problem. By counting how many times we can perform this operation, we know how many 1 exists in the binary representation of n