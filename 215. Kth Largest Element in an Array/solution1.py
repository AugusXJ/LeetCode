class Solution:
    def findKthLargest(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        return sorted(nums, reverse=True)[k-1]



if __name__ == '__main__':
    s1 = Solution()
    nums = [-1,0,3,5,9,12]
    target = 2
    print(s1.search(nums, target))

