# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def trimBST(self, root, L, R):
        """
        :type root: TreeNode
        :type L: int
        :type R: int
        :rtype: TreeNode
        """
        if L > R:
            raise Exception("wrong bound")
        if root is None:
            return root
        elif root.val < L:
            return self.trimBST(root.right, L, R)
        elif root.val > R:
            return self.trimBST(root.left, L, R)
        else:
            root.right = self.trimBST(root.right, root.val, R)
            root.left = self.trimBST(root.left, L, root.val)
            return root


if __name__ == '__main__':
    s1 = Solution()
    t1 = TreeNode(1)
    t2 = TreeNode(0)
    t3 = TreeNode(2)
    t1.left, t1.right = t2, t3
    print(s1.trimBST(t1, 1, 2))