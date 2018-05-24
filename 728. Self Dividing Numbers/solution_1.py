from collections import Counter


class Solution:
    def selfDividingNumbers(self, left, right):
        """
        :type left: int
        :type right: int
        :rtype: List[int]
        """
        result = []
        for i in range(left, right+1):
            if self._if_self_dividing(i):
                result.append(i)
        return result

    @staticmethod
    def _if_self_dividing(num):
        v = num
        while v:
            x = v % 10
            if x == 0 or num % x != 0:
                return False
            v = v // 10
        return True


if __name__ == '__main__':
    s1 = Solution()
    print(s1.selfDividingNumbers(1, 22))