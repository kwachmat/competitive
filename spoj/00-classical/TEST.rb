loop do
    input = $stdin.gets
    if input.to_i != 42 then puts input end
    
    break if input.to_i == 42
end