seconds_per_day = 86400

tests = $stdin.gets.to_i

tests.times do
    total_donuts = 0
    settings = $stdin.gets.split(' ')
    while settings[0].to_i > 0

        glutton = $stdin.gets.to_i 
        total_donuts += seconds_per_day.to_i / glutton.to_i

        settings[0] = settings[0].to_i - 1
    end

    if total_donuts.to_i % settings[1].to_i == 0
        puts total_donuts.to_i / settings[1].to_i
    else
        puts total_donuts.to_i / settings[1].to_i + 1
    end
end