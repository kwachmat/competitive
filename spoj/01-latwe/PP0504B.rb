$stdin.gets.to_i.times do
   
    str = $stdin.gets.split(' ')
    shorter = (str[0].length < str[1].length ? str[0].length : str[1].length) - 1
    
    for i in 0..shorter
        print str[0][i], str[1][i]
    end
    
    print "\n"
end