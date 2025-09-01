# https://leetcode.com/problems/linked-list-cycle/

# Definition for singly-linked list.
# class ListNode
#     attr_accessor :val, :next
#     def initialize(val)
#         @val = val
#         @next = nil
#     end
# end

# @param {ListNode} head
# @return {Boolean}
def hasCycle(head)
    # return false if head == nil
    slow = head
    fast = head
    while(head != nil && fast.next!= nil && fast.next.next != nil)
        slow = slow.next
        fast = fast.next.next

        return true if slow == fast
    end
    return false
end