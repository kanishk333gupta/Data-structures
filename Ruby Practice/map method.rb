class Array
    def my_select
        my_arr = []
        for i in self 
            if yield(i)
                my_arr << i
            end
        end
        my_arr
    end
    
    
    def my_map
        my_arr = []
        for i in self
            my_arr << yield(i)
        end
        my_arr
    end
end


arr = [1,4,6,2]

p arr.my_select{ |i| i>2}.my_map{ |i| i*2}

p arr.select{|i| i>2}.map{ |i| i*2}