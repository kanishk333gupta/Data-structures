#https://leetcode.com/problems/remove-element/

# @param {Integer[]} nums
# @param {Integer} val
# @return {Integer}
def remove_element(nums, val)
    k = 0
    i = 0
    while i < nums.length
        if nums[i] == val
            nums.delete_at(i)
            i -= 1
            # p nums 
        else 
            k += 1
        end
        i += 1
    end
    return k
end