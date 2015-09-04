def min(x, y)
    return (x < y) ? x : y
end

while test = gets do
    break if test == "-1 -1"
    test = test.split(' ').map(&:to_i)
    
    if test[0] == 0 and test[1]==0
        puts "0"
    elsif test[0] == test[1]
        puts "1"
    else
        puts (test[0]+test[1]) / (min(test[0],test[1])+1)
    end
end