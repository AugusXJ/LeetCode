

class Solution:
    def transpose(self, A):
        """
        :type A: List[List[int]]
        :rtype: List[List[int]]
        """
        import numpy as np
        return np.transpose(np.array(A)).tolist()






if __name__ == '__main__':

    s1 = Solution()
    A = [[1,2,3],[4,5,6]]
    print(s1.transpose(A))
