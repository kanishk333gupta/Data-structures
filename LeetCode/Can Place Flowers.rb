# https://leetcode.com/problems/can-place-flowers/description/

# @param {Integer[]} flowerbed
# @param {Integer} n
# @return {Boolean}
def can_place_flowers(flowerbed, n)
    count = 0 
    (0..flowerbed.length-1).each do |i|
        if flowerbed[i] == 0 
            previous = flowerbed[i-1] == 0 || i==0 ? true : false
            nex = flowerbed[i+1] == 0 || i == flowerbed.length-1  ? true : false
            if previous == true and nex == true
                count += 1
                flowerbed[i] = 1
            end
        end
    end
    return count >= n
end