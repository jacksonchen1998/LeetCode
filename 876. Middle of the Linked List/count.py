class Solution:
    def middleNode(self, head: ListNode) -> ListNode:
        count = 0
        res = head
        while head:
            count += 1
            head = head.next
        mid = count // 2
        while mid:
            res = res.next
            mid -= 1
            
        return res