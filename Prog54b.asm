.data
msg_sum: .asciiz "The sum of the 4 numbers is: "
msg_avg: .asciiz "\nThe average of the 4 numbers is: "

.text
main:
	li $t0, 475
	li $t1, 821
	li $t2, 369
	li $t3, 562
	
	add $t4, $t0, $t1
	add $t4, $t4, $t2
	add $t4, $t4, $t3
	
	la $a0, msg_sum
	li $v0, 1
	syscall
	
	move $a0, $t4
	li $v0, 1
	
	li $t5, 4
	div $t4, $t5
	mflo $t6
	
	la $a0, msg_avg
	li $v0, 4
	syscall
	
	move $a0, $t6
	li $v0, 1
	syscall
exit:
	li $v0, 10
	syscall
	