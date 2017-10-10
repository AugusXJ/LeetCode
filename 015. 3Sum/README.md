# 015. 3Sum
-------------

## Description
Given an array S of n integers, are there elements a, b, c in S such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.

**Note**: The solution set must not contain duplicate triplets.

## 解题思路一
三个数相加为0，一共分为三种情况：
- 一个正数两个负数
- 两个正数一个负数
- 三个零

因此我将三种情况分开处理。
- 逐个选择每个数字，然后在剩余数字中寻找符号相反的数字，若三个数之和为0则加入结果数组，此举解决了一二两种情况。
- 计算数组中0的个数，若大于3，则加入{0,0,0}的组合。此举解决第三种情况。

code: [point here](solution_1.cpp)

 * <font color = 'red' >注：上述方法放入题目里时超时，应该是复杂度过高，但是结果是没错的。</font>

## 解题思路二
可以将题目换个意思，`a+b+c=0`可以理解为`a+b=-c`的问题。那么相当于求解两个数之和为某个值时的方法。
> 对数组进行排序，将数字a定为最小值，数字b定为最大值，若两数之和大于-c，则减小数字b的索引，若小于则增加数字a的索引。若相等就是我们的答案了。

这一题需要处理的是会重复，可以使用
```cpp
std::sort(res.begin(), res.end());
res.erase(unique(res.begin(), res.end()), res.end());
```
进行去重复，但是复杂度会较高，因此代码中使用while语句跳过重复的数字。

code：[point here](solution_2.cpp)
