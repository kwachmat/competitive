row1, row2, row3 = 0, 0, 0

gets.to_i.times do
    a, b, c = gets.split(' ').map(&:to_i)
       
    tmp1 = a + [row2, row3].min
    tmp2 = b + [row1, row3].min
    tmp3 = c + [row1, row2].min
    
    row1, row2, row3 = tmp1, tmp2, tmp3
end

puts [row1, row2, row3].min