lower = Array.new(26, 0)
upper = Array.new(26, 0)

$stdin.gets.to_i.times do
    $stdin.gets.to_s.each_char { |c|
        if c =~ /[a-z]/ then lower[c.ord-97] += 1 end
        if c =~ /[A-Z]/ then upper[c.ord-65] += 1 end
    }
end

lower.each_with_index { |c, i| if c > 0 then print (i+97).chr, " ", c, "\n" end }
upper.each_with_index { |c, i| if c > 0 then print (i+65).chr, " ", c, "\n" end }