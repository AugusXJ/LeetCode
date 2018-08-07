## 560. Subarray Sum Equals K

### Description

Given an array of integers and an integer **k**, you need to find the total number of continuous subarrays whose sum equals to **k**.

**Example 1:**

```
Input:nums = [1,1,1], k = 2
Output: 2

```

**Note:**

1. The length of the array is in range [1, 20,000].
2. The range of numbers in the array is [-1000, 1000] and the range of the integer **k** is [-1e7, 1e7].

### Solution

Let's remember count[V], the number of previous prefix sums with value V. If our newest prefix sum has value W, and W-V == K, then we add count[V] to our answer.

This is because at time t, `A[0] + A[1] + ... + A[t-1] = W`, and there are `count[V]` indices `j` with `j < t-1` and `A[0] + A[1] + ... + A[j] = V`. Thus, there are `count[V]` subarrays `A[j+1] + A[j+2] + ... + A[t-1] = K`.

```
def subarraySum(self, A, K):
    count = collections.Counter()
    count[0] = 1
    ans = su = 0
    for x in A:
        su += x
        ans += count[su-K]
        count[su] += 1
    return ans
```

code: [solution1.py](solution1.py)