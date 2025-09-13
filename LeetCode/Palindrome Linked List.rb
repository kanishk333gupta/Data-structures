#https://leetcode.com/problems/palindrome-linked-list/

# Definition for singly-linked list.
# class ListNode
#     attr_accessor :val, :next
#     def initialize(val = 0, _next = nil)
#         @val = val
#         @next = _next
#     end
# end
# @param {ListNode} head
# @return {Boolean}
def is_palindrome(head)
    
    slow, fast = head, head

    while(fast != nil && fast.next != nil)
        slow = slow.next
        fast = fast.next.next
    end
    
    rev = reverse(slow)    
    current = head

    while rev != nil
    if current.val != rev.val
        return false
    end
    current = current.next
    rev = rev.next 
    end

    return true
end

def reverse(list)
    prev = nil
    curr = list
    while curr != nil
        nex = curr.next
        curr.next = prev
        prev = curr
        curr = nex
    end
    return prev
end