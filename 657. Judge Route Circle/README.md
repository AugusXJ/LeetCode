# 657. Judge Route Circle
-------

## Description
Initially, there is a Robot at position (0, 0). Given a sequence of its moves, judge if this robot makes a circle, which means it moves back to the original place.

The move sequence is represented by a string. And each move is represent by a character. The valid robot moves are `R` (Right), `L` (Left), `U` (Up) and `D` (down). The output should be true or false representing whether the robot makes a circle.

Example 1:

	Input: "UD"
	Output: true
Example 2:

	Input: "LL"
	Output: false

## 思路
1. 设置两个变量`horizontal`和`vertical`，并初始化为0，若两个变量都未0则表示为起点。
2. 逐位读取字符串，若为`R`，`horizontal+1`；若为`L`，`horizontal-1`；若为`U`，`vertical+1`；若为`D`，`vertival-1`。
3. 读取完字符串之后，判断`horizontal`和`vertical`是否均为0，若是则返回`true`，否则返回`false`。

code: [click here](solution_1.cpp)