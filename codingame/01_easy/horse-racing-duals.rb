def abs(x)
    return (x.to_i >= 0 ? x.to_i : (x.to_i*(-1)))
end

$previous = -1
$min_diff = 9999
$horses = Array.new

gets.to_i.times do #n times
    $horses.push(gets.to_i)
end

$horses.sort.each do |h|
    if($previous.to_i == -1) #first run
        $previous = h
    elsif
        $curr_diff = abs($previous.to_i - h.to_i)
        if ($curr_diff.to_i < $min_diff.to_i) # searching for min diff
            $min_diff = $curr_diff.to_i
        end
    end
    
    $previous = h.to_i
end

puts $min_diff