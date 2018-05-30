class Solution:
    def findComplement(self, num):
        """
        :type num: int
        :rtype: int
        """
        result = 0
        l = list()
        while num != 0:
            l.append(num % 2)
            num //= 2
        l = [1-i for i in l]
        for index, i in enumerate(l):
            result += pow(2, index) * i
        return result


if __name__ == '__main__':
    s1 = Solution()
    print(s1.findComplement(1))