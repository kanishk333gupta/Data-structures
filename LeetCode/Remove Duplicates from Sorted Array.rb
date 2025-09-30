#https://leetcode.com/problems/remove-duplicates-from-sorted-array/

# @param {Integer[]} nums
# @return {Integer}
def remove_duplicates(nums)
    k = 0
    nums.each_with_index do |num, _|
        if num != nums[k]
            k += 1
            nums[k] = num
        end   
    end
    k + 1
end