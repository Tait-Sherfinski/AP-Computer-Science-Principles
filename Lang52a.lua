print("Enter length: ")
local.length = io.read
print("Enter width: ")
local.width = io.read

local area = length * width
local perim = 2 * length + 2 * width
print("The area is: ", area)
print("The perimeter is: ", perim)