class Solution:
    def subarraySum(self, A, K):
        import collections
        count = collections.Counter()
        count[0] = 1
        ans = su = 0
        for x in A:
            su += x
            ans += count[su - K]
            count[su] += 1
        return ans


if __name__ == '__main__':
    s1 = Solution()
    nums = [-1, -1, 1]
    k = 0
    print(s1.subarraySum(nums, k))

