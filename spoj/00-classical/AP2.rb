gets.to_i.times do
    third, third_last, sum = gets.split(' ').map(&:to_i)

    n = (2*sum)/(third+third_last)
    r = (third_last - third)/(n-5)

    puts n

    first = third-2*r
    for i in 0..n-1 do
        print first + i*r, " "
    end
end