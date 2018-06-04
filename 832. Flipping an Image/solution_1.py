class Solution:
    def flipAndInvertImage(self, A):
        """
        :type A: List[List[int]]
        :rtype: List[List[int]]
        """
        return [[1-i for i in row[::-1]] for row in A]



if __name__ == '__main__':
    s1 = Solution()
    print(s1.flipAndInvertImage([[1,1,0],[1,0,1],[0,0,0]]))