#https://jsonmattingly.medium.com/writing-your-own-enumerables-in-ruby-18db4fa0e5fe

class Array
  def my_each
      for i in self
        yield(i)
    end
  end
end

arr = [1,2,3]
arr.my_each do |i|
    p i
end
