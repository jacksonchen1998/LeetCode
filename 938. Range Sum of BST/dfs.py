# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    res = 0
    def helper(self, root, low, high):
        if root == None:
            return
        if root.val <= high and root.val >= low:
            self.res += root.val
        if root.left:
            self.helper(root.left, low, high)
        if root.right:
            self.helper(root.right, low, high)
        return

    def rangeSumBST(self, root: Optional[TreeNode], low: int, high: int) -> int:
        self.helper(root, low, high)
        return self.res