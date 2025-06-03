.text
main:
	li $t0, 7
	li $t1, 3
	
	mul $t3, $t0, $t1
	
	div $t0, $t1
	mflo $t5 # quotient
	mfhi $t6 # remainder
exit:
	li $v0, 10
	syscall
