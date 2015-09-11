distsum = 0.00
prev_x, prev_y = gets[0..-3].split('(').last.split(', ').map(&:to_f)

while input = gets do
    x, y = input[0..-3].split('(').last.split(', ').map(&:to_f)

    distsum += Math.sqrt((x-prev_x)**2 + (y-prev_y)**2)
    printf("The salesman has traveled a total of %.3f kilometers.\n", distsum)
	
    prev_x, prev_y = x, y
end