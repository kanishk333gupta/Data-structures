#https://leetcode.com/problems/merge-sorted-array/

# @param {Integer[]} nums1
# @param {Integer} m
# @param {Integer[]} nums2
# @param {Integer} n
# @return {Void} Do not return anything, modify nums1 in-place instead.
def merge(nums1, m, nums2, n)
    # nums1.sort!
    # nums2.sort!
    j = 0
    (m..nums1.length).each do |i|
        if nums1[i]==0
            nums1[i] = nums2[j]
            j += 1 
        end
    end
    return nums1.sort!
end