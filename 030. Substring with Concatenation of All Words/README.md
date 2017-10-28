# 030. Substring with Concatenation of All Words
--------

## Description
You are given a string, s, and a list of words, words, that are all of the same length. Find all starting indices of substring(s) in s that is a concatenation of each word in words exactly once and without any intervening characters.

For example, given:
**s**: `"barfoothefoobarman"`
**words**: `["foo", "bar"]`

You should return the indices: [0,9].
(order does not matter).

## 思路
大致思路就是遍历字符串每个字符，判断从该字符开始的子字符串是否满足要求，从0遍历到n-len\*num+1（因为当首字符大于n-len\*num+1时肯定不满足条件)，n为字符串的长度，len为words中单词个数，num为words中单词长度。
**当确定首字符i时，判断是否满足条件的方法：**我们使用一个名为counts的`ordered_map`记录words中每种单词出现的次数，并用一个名为seen的`ordered_map`记录首字符i之下每个word的出现次数。
从i开始每num个字符记录为一个子字符串，记为`word`并判断该字符串是否在words数组中出现过，若未出现过则该首字符i不满足条件，若出现过则增加该word出现的次数，如果次数大于`counts`中的次数，那么说明多次使用该`word`，所以不满足。

代码：[click here](solution_1.cpp)