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
end


arr = [1,4,6,2]

p arr.my_select{ |i| i>2}

p arr.select{|i| i>2}