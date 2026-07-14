# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def deleteDuplicates(self, head):
        present = head
        while present and present.next:
            if present.val == present.next.val:
                present.next = present.next.next
            else:
                present = present.next
        return head
        