p @x if $<.map { |num| @x = @x.to_i ^ num.to_i }

=begin
while input = $stdin.gets 
  result = result.to_i ^ input.to_i
end
puts result
=end
