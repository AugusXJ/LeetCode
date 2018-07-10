
class Solution:
    def isToeplitzMatrix(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: bool
        """
        for i in range(len(matrix)-1):
            if not matrix[i][:len(matrix[0])-1] == matrix[i+1][1:len(matrix[0])]:
                return False
        return True








if __name__ == '__main__':

    s1 = Solution()
    matrix = [
        [1, 2, 3, 4],
        [5, 1, 2, 3],
        [9, 5, 1, 2]
    ]

    print(s1.isToeplitzMatrix(matrix))
