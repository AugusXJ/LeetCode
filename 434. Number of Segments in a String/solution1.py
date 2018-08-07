class Solution:
    def countSegments(self, s):
        """
        :type s: str
        :rtype: int
        """
        return len(s.split())

if __name__ == '__main__':
    s1 = Solution()
    str = "Hello, my name is John"
    print(s1.countSegments(str))

