# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    res = 0
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        self.countDepth(root, 1)
        return self.res
        
    def countDepth(self, root, depth):
        if root == None:
            return
        self.res = max(self.res, depth)
        if root.left:
            self.countDepth(root.left, depth+1)
        
        if root.right:
            self.countDepth(root.right, depth+1)