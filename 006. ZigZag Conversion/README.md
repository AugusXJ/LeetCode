# 006. ZigZag Conversion
------------------------------------------------

## Description&&Examples:
The string `"PAYPALISHIRING"` is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)


	P   A   H   N
	A P L S I I G
	Y   I   R

And then read line by line: "PAHNAPLSIIGYIR"
Write the code that will take a string and make this conversion given a number of rows:

	string convert(string text, int nRows);
`convert("PAYPALISHIRING", 3)` should return `"PAHNAPLSIIGYIR"`.

## 解题思路
### 数据
因为需要把数据分成`nRows`行，所以创建`nRows`个`vector<char>`，或者`string`，将字符串按一定规则存入这几个`string`中，最后把所有`string`按顺序首尾连起来就可以了。

### 方法
主要的问题就是如何把`text`这个字符串中的数据存到几个创建的字符串中。由于是Z字形的，数据写入有两种情况，一直是往下移一格，或者是往右上移一格，因此设置一个变量表示两种状态即可。

code: [point here](solution_1.cpp)
