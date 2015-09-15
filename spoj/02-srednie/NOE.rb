# CODE GOLF VERSION:
p @x if $<.map { |num| @x = @x.to_i ^ num.to_i }

# UNCOMPRESSED VERSION:

=begin
while num = gets
  x = x.to_i ^ num.to_i
end
puts x
=end
