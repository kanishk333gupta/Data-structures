# https://leetcode.com/problems/container-with-most-water/submissions/1731415097/

# @param {Integer[]} height
# @return {Integer}
def max_area(height)
    n = height.length
    left = 0
    right = n-1
    max = 0
    while left < right
        max = [([height[left], height[right]].min)*(right-left) , max].max
        if height[left] >= height[right] 
            right -= 1
            # p [height[left], height[right]]
            # p [left, right] 
            # p 'r'
        elsif height[left] < height[right] 
            left += 1
            # p [height[left], height[right]]
            # p [left, right]
            # p 'l'
        # else
            # left += 1
            # right -= 1
        end
        
        # p max
    end
    return max
end