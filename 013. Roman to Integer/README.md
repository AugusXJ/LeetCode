# 013. Roman to Integer
-------------------

## Description
Given a roman numeral, convert it to an integer.

Input is guaranteed to be within the range from 1 to 3999.

## 解题思路

得知道阿拉伯数字和罗马数字之间的转换：
```
符号 数值  
Ⅰ  （1）  
Ⅴ  （5）  
Ⅹ  （10）  
L  （50）  
C  （100）  
D  （500）  
M  （1000）
```

一些例子：
```
I,1
II，2
III，3
IV，4
V，5
VI，6
VII，7
VIII，8
IX，9

X，10
XI，11
XII，12
XIII,13
XIV,14
XV,15
XVI,16
XVII,17
XVIII,18
XIX,19
XX,20
XXI,21
XXII,22
XXIX,29
XXX,30
XXXIV,34
XXXV,35
XXXIX,39
XL,40
L,50
LI,51
LV,55
LX,60
LXV,65
LXXX,80
XC,90
XCIII,93
XCV,95
XCVIII,98
XCIX,99

C,100
CC,200
CCC,300
CD,400
D,500
DC,600
DCC,700
DCCC,800
CM,900
CMXCIX,999
```
了解罗马数字之和，知道罗马数字的大小是通过叠加完成的，如果前面的数比后面的小，那么前面的数就是负的，否则就是正的。根据这个思路可以得到代码：
code: [point here](solution_1.cpp)