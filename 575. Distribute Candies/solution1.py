
class Solution:
    def distributeCandies(self, candies):
        """
        :type candies: List[int]
        :rtype: int
        """
        num = len(candies) // 2
        diff_num = len(set(candies))
        return min(num, diff_num)



if __name__ == '__main__':

    s1 = Solution()
    print(s1.distributeCandies([1, 1, 2, 2, 3, 3]))
