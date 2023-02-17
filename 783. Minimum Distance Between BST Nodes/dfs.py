# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    res = 100001
    prev = None
    
    def minDiffInBST(self, root: Optional[TreeNode]) -> int:
        if root is None:
            return 0
        
        self.helper(root)
        
        return self.res
    
    def helper(self, root):
        if root is None:
            return
        
        self.helper(root.left)
        
        if self.prev is not None:
            self.res = min(self.res, root.val - self.prev)
        
        self.prev = root.val
        
        self.helper(root.right)

        
        
