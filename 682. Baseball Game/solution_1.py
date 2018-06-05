class Solution:
    def calPoints(self, ops):
        """
        :type ops: List[str]
        :rtype: int
        """
        history = []
        for s in ops:
            if s == '+':
                history.append(history[-1] + history[-2])
            elif s == 'D':
                history.append(2 * history[-1])
            elif s == 'C':
                history.pop()
            else:
                history.append(int(s))
        return sum(history)


if __name__ == '__main__':
    s1 = Solution()
    print(s1.calPoints(["5","-2","4","C","D","9","+","+"]))