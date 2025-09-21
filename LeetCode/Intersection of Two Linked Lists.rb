#https://leetcode.com/problems/intersection-of-two-linked-lists/

# Definition for singly-linked list.
# class ListNode
#     attr_accessor :val, :next
#     def initialize(val)
#         @val = val
#         @next = nil
#     end
# end

# @param {ListNode} headA
# @param {ListNode} headB
# @return {ListNode}
def getIntersectionNode(headA, headB)
    # hash = {}
    # while headA != nil
    #     hash.merge!(headA => 1)
    #     headA = headA.next
    # end
    # while headB != nil
    #     if hash[headB] == 1
    #         return headB
    #     end 
    #         headB = headB.next
    # end
    # return nil
    a, b = 0, 0
    temp1, temp2 = headA, headB
    while temp1 != nil
        a += 1
        temp1 = temp1.next
    end 

    while temp2 != nil
        b += 1
        temp2 = temp2.next
    end
    
    t = (a-b).abs
    while t > 0
        if a > b
            headA = headA.next
        else        
            headB = headB.next 
        end
        t -= 1 
    end

    while (headA != nil && headB != nil)
        return headA if headA == headB
        headA = headA.next
        headB = headB.next
    end
    return nil
end