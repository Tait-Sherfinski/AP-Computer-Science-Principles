.data
prompt1: .asciiz "Enter length: "
prompt2: .asciiz "Enter width: "
out1: .asciiz "Area: "
out2: .asciiz "\nPerimeter: "

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
	
	mult $t0, $t1
	mflo $t4
	li $s2, 2
	mul $t8, $t0, $s2
	mul $t9, $t1, $s2
	add $t5, $t8, $t9
	
	la $a0, out1
	li $v0, 4
	syscall
	move $a0, $t4
	li $v0, 1
	syscall
	
	la $a0, out2
	li $v0, 4
	syscall
	move $a0, $t5
	li $v0, 1
	syscall
exit:
	li $v0, 10
	syscall