while input = gets do
    
    words_count = numbers_count = 0
    input.split(' ').each { |i| (i =~ /[0-9]/ ? numbers_count += 1 : words_count += 1) }

    print numbers_count, ' ', words_count, "\n"
end