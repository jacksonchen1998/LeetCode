class Solution:

    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        if not root:
            return

        res, cur_level = [[root.val]], [root]

        while cur_level:
            next_level, vals = [], []
            for node in cur_level:
                if node.left:
                    next_level.append(node.left)
                    vals.append(node.left.val)
                if node.right:
                    next_level.append(node.right)
                    vals.append(node.right.val)
            if next_level:
                cur_level = next_level.copy()
                res.append(vals)
            else:
                break
        return res