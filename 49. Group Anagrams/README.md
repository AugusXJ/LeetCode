## 49. Group Anagrams

### Description

Given an array of strings, group anagrams together.

**Example:**

```
Input: ["eat", "tea", "tan", "ate", "nat", "bat"],
Output:
[
  ["ate","eat","tea"],
  ["nat","tan"],
  ["bat"]
]
```

**Note:**

- All inputs will be in lowercase.
- The order of your output does not matter.

## Solution

使用`collections.defaultdict(list)`来创建dict，相比于dict具有初始值。再不断把每个字符串加入到对应的value中，最后返回value。

[solution1.py](solution1.py)