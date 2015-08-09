def nwd(a, b)
    while b > 0 do
        c = a.modulo(b)
        a = b
        b = c
    end
    a = a
end 

tests = gets.to_i
tests.times do
    numbers = gets.split(" ")
    puts nwd(numbers[0].to_i, numbers[1].to_i)
end