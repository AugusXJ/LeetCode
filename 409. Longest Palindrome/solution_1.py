from collections import Counter

class Solution:
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: int
        """
        dic = Counter(s)
        num = 0
        ifsingle = False
        for key, value in dic.items():
            if value % 2 == 0:
                num += value
            else:
                num += value - 1
                ifsingle = True
        return num + 1 if ifsingle else num

if __name__ == '__main__':
    s1 = Solution()
    print(s1.longestPalindrome('bb'))