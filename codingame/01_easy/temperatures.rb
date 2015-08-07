def abs(x)
    return (x.to_i >= 0 ? x.to_i : (x.to_i*(-1)))
end

# -------------------------------

if gets.to_i == 0 # get n
    puts "0"
else
    $min = 9999 # unreachable

    gets.chomp.split(' ').each do |t|
        if abs(t).to_i < abs($min.to_i) # f.e. replace 5 with 3
            $min = t.to_i
        elsif (abs(t).to_i == abs($min.to_i)) && (t.to_i > $min.to_i) # f.e. replace -1 with 1
            $min = t.to_i
        end            
    end
    
    puts $min
end