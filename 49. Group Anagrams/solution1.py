class Solution:
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        import collections
        ans = collections.defaultdict(list)
        for s in strs:
            ans[tuple(sorted(s))].append(s)
        return list(ans.values())

if __name__ == '__main__':
    s1 = Solution()
    nums = ["eat", "tea", "tan", "ate", "nat", "bat"]
    print(s1.groupAnagrams(nums))

