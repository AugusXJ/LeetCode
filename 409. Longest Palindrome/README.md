# 409. Longest Palindrome
---------

## Description
Given a string which consists of lowercase or uppercase letters, find the length of the longest palindromes that can be built with those letters.

This is case sensitive, for example `"Aa"` is not considered a palindrome here.

**Note:**
Assume the length of given string will not exceed 1,010.

**Example:**

	Input:
	"abccccdd"
	
	Output:
	7

	Explanation:
	One longest palindrome that can be built is "dccaccd", whose length is 7.

## 思路
**考察点：**字符串
**目标：**用字符串里的字符拼凑最大的回文字符串
**方案：**这题很简单，只要列出字符串中每个字符的数量即可。如果是偶数则该字符可以全部作为回文，若为奇数则字符数-1可以作为回文。需要注意的是，如果存在奇数，最后结果要+1，因为回文字符串中间的数可以不对称。

code: [click here](solution_1.py)