gets.to_i.times do
    prog = gets.split(' ').map(&:to_i)

    n = (2*prog[2])/(prog[0]+prog[1])
    r = (prog[1]-prog[0])/(n-5)

    puts n

    first = prog[0]-2*r
    for i in 0..n-1 do
        print first + i*r, " "
    end
end