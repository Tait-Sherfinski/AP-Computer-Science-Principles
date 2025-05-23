.data
prompt1: .asciiz "Enter an integer: "
prompt2: .asciiz "Enter another integer: "
out1: .asciiz "Sum: "
out2: .asciiz "\nDifference: "
.text
main:
	la $a0, prompt1
	li $v0, 4
	syscall
	li $v0, 5
	syscall
	move $t0, $v0
	
	la $a0, prompt2
	li $v0, 4
	syscall
	li $v0, 5
	syscall
	move $t1, $v0
	
	add $t2, $t0, $t1
	la $a0, out1
	li $v0, 4
	syscall
	move $a0, $t2
	li $v0, 1
	syscall
	
	sub $t3, $t0, $t1
	la $a0, out2
	li $v0, 4
	syscall
	move $a0, $t3
	li $v0, 1
	syscall
exit:
	li $v0, 10
	syscall
	