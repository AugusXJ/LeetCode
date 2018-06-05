class Solution:
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        strList = s.split(' ')
        strList = [str[::-1] for str in strList]
        return ' '.join(strList)


if __name__ == '__main__':
    s1 = Solution()
    print(s1.reverseWords("Let's take LeetCode contest"))