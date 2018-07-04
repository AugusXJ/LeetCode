class Solution:
    def matrixReshape(self, nums, r, c):
        """
        :type nums: List[List[int]]
        :type r: int
        :type c: int
        :rtype: List[List[int]]
        """
        import numpy as np
        try:
            return np.reshape(nums, (r, c)).tolist()
        except:
            return nums



if __name__ == '__main__':

    s1 = Solution()
    nums = [[1, 2],[3, 4]]
    r = 1
    c = 4
    print(s1.matrixReshape(nums, r, c))
