# Prog54c
.data
prompt: .asciiz "Enter radius: "
a_msg: .asciiz "Area: "
p_msg: .asciiz "Perimeter: "
endl: .asciiz "\n"
pi: .float 3.14159
two: .float 2.0

.text
main:
	# Prompt for radius
	la $a0, prompt
	li $v0, 4
	syscall
	
	# read in radius
	li $v0, 6 # read_float()
	syscall
	mov.s $f10, $f0
	
	# load in pi
	l.s $f11, pi
	# compute the area
	mul.s $f2, $f10, $f10 # f12 = f10^2
	mul.s $f14, $f2, $f10 
	# compute perimeter
	l.s $f15, two
	mul.s $f16, $f15, $f11
	mul.s $f18, $f16, $f10
	# print area
	la $a0, a_msg
	li $v0, 4
	syscall
	mov.s $f12, $f14
	li $v0, 2
	syscall
	la $a0, endl
	li $v0, 4
	syscall
	# print perimeter
	la $a0, p_msg
	li $v0, 4
	syscall
	mov.s $f12, $f18
	li $v0, 2
	syscall
	la $a0, endl
	li $v0, 4
	syscall
exit:
	li $v0, 10
	syscall