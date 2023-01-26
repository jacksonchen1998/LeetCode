class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        return self.recursive(root, float('inf'), float('-inf'))
        
    def recursive(self, root, upper, lower):
        if root is None:
            return True
            
        if root.val >= upper or root.val <= lower:
            return False
            
        return self.recursive(root.left, root.val, lower) and \
            self.recursive(root.right, upper, root.val)