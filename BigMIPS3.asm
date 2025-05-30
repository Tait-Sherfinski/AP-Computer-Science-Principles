.data
prompt: .asciiz "Enter an integer: "
even_msg: .asciiz "The integer is even"
odd_msg: .asciiz "The integer is odd"
.text
main:
	la $a0, prompt
	li $v0, 4
	syscall
	li $v0, 5
	syscall
	move $a0, $v0
	li $s0, 2
	div $v0, $s0
	mflo $t0
	mfhi $t1
	li $t2, 1
	li $t3, 0
	beq $t1, $t2, odd
	beq $t1, $t3, even
odd:
	la $a0, odd_msg
	li $v0, 4
	syscall
	j exit
even:
	la $a0, even_msg
	li $v0, 4
	syscall
	j exit
exit:
	li $v0, 10
	syscall
