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
        :rtype: List[List[int]]
        """
        if root is None:
            return []
        elif root.val == sum and root.left is None and root.right is None:
                return [[root.val]]
        else:
            llist = self.pathSum(root.left, sum - root.val)
            rlist = self.pathSum(root.right, sum - root.val)
            if len(llist) == 0 and len(rlist) == 0:
                return []
            root_list = llist + rlist
            root_list = [[root.val] + l for l in root_list]
        return root_list






if __name__ == '__main__':

    r1 = TreeNode(5)
    r2_1, r2_2 = TreeNode(4), TreeNode(8)
    r1.left, r1.right = r2_1, r2_2
    r3_1, r3_2, r3_3 = TreeNode(11), TreeNode(13), TreeNode(4)
    r2_1.left, r2_2.left, r2_2.right = r3_1, r3_2, r3_3
    r4_1, r4_2, r4_3, r4_4 = TreeNode(7), TreeNode(2), TreeNode(5), TreeNode(1)
    r3_1.left, r3_1.right, r3_3.left, r3_3.right = r4_1, r4_2, r4_3, r4_4

    s1 = Solution()
    print(s1.pathSum(r1, 22))
