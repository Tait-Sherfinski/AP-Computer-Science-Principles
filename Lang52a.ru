puts "Enter length: "
length = STDIN.gets.chomp.to_i
puts "Enter width: "
width = STDIN.gets.chomp.to_i

area = length * width
perim = 2 * length + 2 * width
puts "The area is: #{area}"
puts "The perimeter is: #{perim}"