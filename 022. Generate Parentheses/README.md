# 022. Generate Parentheses
---------------

## Description
Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

For example, given n = 3, a solution set is:

	[
	  "((()))",
	  "(()())",
	  "(())()",
	  "()(())",
	  "()()()"
	]

## 解题思路
用两个变量`m1`和`m2`分别表示当前`string`可加入的左右括号数量，比如当`n=3`时，初始时`m1=3`,`m2=0`，表示此时可放置3个左括号，但是不能放置右括号。当放置一个`(`之后，`m1--.m2++`，此时`m2=1`表示可以放置一个右括号了；若放置一个右括号，此时`m2--`，表示该右括号与前面一个左括号配对了。持续这个过程直到`m1=0 && m2=0`那么就找到一种结果了。
由于每次选择时若`m1!=0 && m2!=0`就会有两种选择，因此结果会生成多个`string`。

code: [point here](solution_1.cpp)