# 010. Regular Expression Matching
---------------------------------

## Description
Implement regular expression matching with support for '.' and '*'.

```
'.' Matches any single character.
'*' Matches zero or more of the preceding element.

The matching should cover the entire input string (not partial).

The function prototype should be:
bool isMatch(const char *s, const char *p)

Some examples:
isMatch("aa","a") → false
isMatch("aa","aa") → true
isMatch("aaa","aa") → false
isMatch("aa", "a*") → true
isMatch("aa", ".*") → true
isMatch("ab", ".*") → true
isMatch("aab", "c*a*b") → true
```

## 解题思路
题目需要比较两个字符串，大致思路是使用递归，若字符串match成功则子字符串必match，难点是处理两个特殊字符`.`和`*`。
- 字符`.`: 这个比较好处理，把它看成任意单字符。
- 字符`*`: 这个字符是本题的难点，重复大于等于0次的上个字符。那么就要考虑`*`字符前个字符及0次和大于0次两种情况：
	- 0次： 如果是0次，就比较该字符之后的子字符串`p'`与`s`的match关系。
	- 大于0次：判断s字符串的首字符与`*`前一字符是否匹配，若匹配则取s字符串的剩余子字符串与p进行匹配,若不匹配就相当于0次使用了。

code： [ponit here](solution_1.cpp)

```cpp
class Solution {
public:
	bool isMatch(string s, string p) {
		if (p.empty())    return s.empty();

		if ('*' == p[1])
			// x* matches empty string or at least one character: x* -> xx*
			// *s is to ensure s is non-empty
			return (isMatch(s, p.substr(2)) || !s.empty() && (s[0] == p[0] || '.' == p[0]) && isMatch(s.substr(1), p));
		else
			return !s.empty() && (s[0] == p[0] || '.' == p[0]) && isMatch(s.substr(1), p.substr(1));
	}
};
```