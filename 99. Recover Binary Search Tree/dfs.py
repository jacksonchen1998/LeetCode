class Solution:
    def recoverTree(self, root: TreeNode) -> None:
        """
        Do not return anything, modify root in-place instead.
        """
        def dfs(root):
            if not root:
                return
            dfs(root.left)
            if self.prev and root.val < self.prev.val:
                if not self.first:
                    self.first = self.prev
                self.second = root
            self.prev = root
            dfs(root.right)
        self.first = None
        self.second = None
        self.prev = None
        dfs(root)
        self.first.val, self.second.val = self.second.val, self.first.val