class Solution:
    def preorder(self, root: 'Node') -> List[int]:
        res = []
        self.traversal(res, root)
        return res
        
    def traversal(self, res: List[int], root: 'Node'):
        if root is None:
            return
            
        res.append(root.val)
        
        for child in root.children:
            self.traversal(res, child)