class Solution:
    def numberOfLines(self, widths, S):
        """
        :type widths: List[int]
        :type S: str
        :rtype: List[int]
        """
        line = 1
        letter = 0
        for s in S:
            length = widths[ord(s) - ord('a')]
            if letter + length > 100:
                letter = length
                line += 1
            else:
                letter += length
        return [line, letter]



if __name__ == '__main__':
    s1 = Solution()
    widths = [4, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10]
    S = "bbbcccdddaaa"
    print(s1.numberOfLines(widths, S))