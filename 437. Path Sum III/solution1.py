# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def pathSum(self, root, sum):
        """
        :type root: TreeNode
        :type sum: int
        :rtype: int
        """
        if root is None:
            return 0
        num = self.sumup(root, 0, sum)
        return num + self.pathSum(root.left, sum) + self.pathSum(root.right, sum)

    def sumup(self, root, pre, sum):
        if root is None:
            return 0
        pre += root.val
        return (pre == sum) + self.sumup(root.left, pre, sum) + self.sumup(root.right, pre, sum)


if __name__ == '__main__':
    t1 = TreeNode(10)
    t2 = TreeNode(5)
    t3 = TreeNode(-3)
    t4 = TreeNode(3)
    t5 = TreeNode(2)
    t6 = TreeNode(11)
    t7 = TreeNode(3)
    t8 = TreeNode(-2)
    t9 = TreeNode(1)
    t1.left, t1.right = t2, t3
    t2.left, t2.right = t4, t5
    t3.right = t6
    t4.left, t4.right = t7, t8
    t5.right = t9
    s1 = Solution()
    print(s1.pathSum(t1, 8))
