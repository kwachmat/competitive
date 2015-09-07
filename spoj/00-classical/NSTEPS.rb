gets.to_i.times do
    x, y = gets.split(' ').map(&:to_i)
    
    if x!=y and (x-y)!=2 then puts "No Number"
    elsif x%2==0 and y%2==0 then puts x+y
    else puts x+y-1 end
end