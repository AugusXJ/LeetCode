# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def isValidBST(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        if root is None:
            return True
        result = [True, True]
        if root.left is not None:
            result[0] = self.isValidBST(root.left) if self.largethan(root.left) < root.val else False
        if root.right is not None:
            result[1] = self.isValidBST(root.right) if self.lessthan(root.right) > root.val else False
        return result[0] and result[1]

    def lessthan(self, root):
        if root is None:
            return float('inf')
        return min(root.val, self.lessthan(root.left), self.lessthan(root.right))

    def largethan(self, root):
        if root is None:
            return float('-inf')
        return max(root.val, self.largethan(root.left), self.largethan(root.right))


if __name__ == '__main__':

    s1 = Solution()
    r1 = TreeNode(3)
    r2_1, r2_2 = TreeNode(1), TreeNode(5)
    r1.left, r1.right = r2_1, r2_2
    r3_1, r3_2, r3_3, r3_4 = TreeNode(0), TreeNode(2), TreeNode(4), TreeNode(6)
    r2_1.left, r2_1.right = r3_1, r3_2
    r2_2.left, r2_2.right = r3_3, r3_4
    r4_2 = TreeNode(3)
    r3_2.right = r4_2
    # r4_1, r4_2, r4_3, r4_4 = TreeNode(7), TreeNode(2), TreeNode(5), TreeNode(1)
    # r3_1.left, r3_1.right, r3_3.left, r3_3.right = r4_1, r4_2, r4_3, r4_4

    print(s1.isValidBST(r1))
