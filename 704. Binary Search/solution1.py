class Solution:
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        return nums.index(target) if target in nums else -1


if __name__ == '__main__':
    s1 = Solution()
    nums = [-1,0,3,5,9,12]
    target = 2
    print(s1.search(nums, target))

