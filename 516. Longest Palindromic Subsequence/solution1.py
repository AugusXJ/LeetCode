class Solution:
    def __init__(self):
        self.time = 0
    def longestPalindromeSubseq(self, s):
        """
        :type s: str
        :rtype: int
        """
        return self.long(s, 0, len(s)-1)

    def long(self, s, i, j):
        self.time += 1
        print(i, j)
        if i > j:
            return 0
        elif i == j:
            return 1
        else:
            return 2 + self.long(s, i+1, j-1) if s[i] == s[j] \
                else max(self.long(s, i+1, j), self.long(s, i, j-1))


if __name__ == '__main__':
    s1 = Solution()
    s = "euazbipzncptldueeuechubrcourfpftcebikrxhybkymimgvldiwqvkszfycvqyvtiwfckexmowcxztkfyzqovbtmzpxojfofbvwnncajvrvdbvjhcrameamcfmcoxryjukhpljwszknhiypvyskmsujkuggpztltpgoczafmfelahqwjbhxtjmebnymdyxoeodqmvkxittxjnlltmoobsgzdfhismogqfpfhvqnxeuosjqqalvwhsidgiavcatjjgeztrjuoixxxoznklcxolgpuktirmduxdywwlbikaqkqajzbsjvdgjcnbtfksqhquiwnwflkldgdrqrnwmshdpykicozfowmumzeuznolmgjlltypyufpzjpuvucmesnnrwppheizkapovoloneaxpfinaontwtdqsdvzmqlgkdxlbeguackbdkftzbnynmcejtwudocemcfnuzbttcoew"
    print(s1.longestPalindromeSubseq(s))

