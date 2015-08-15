def fctrl(x)
    return (x < 2 ? 1 : x*fctrl(x-1))
end

$stdin.gets.to_i.times do
    puts fctrl($stdin.gets.to_i)
end