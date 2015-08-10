STDOUT.sync = true # DO NOT REMOVE

$MAX = -1

# game loop
loop do
    $SX, $SY = gets.split(" ").collect {|x| x.to_i}
    for i in 0..7
        $MH = gets.to_i # represents the height of one mountain, from 9 to 0.
        
        if $MH > $MAX
            $MAX = $MH
            $MAX_X = i
        end
    end
    
    # Write an action using puts
    # To debug: STDERR.puts "Debug messages..."
    
    if $SX == $MAX_X
        puts "FIRE"
        $MAX = 0
    else
        puts "HOLD"
    end
    
end