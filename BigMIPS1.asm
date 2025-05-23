.text
main:
	li $t0, 1000
	li $t1, 200
	li $t2, 30
	li $t3, 2
	
	sub $t4, $t0, $t1
	add $t4, $t4, $t2
	mul $t4, $t4, $t3
	
	move $a0, $t4
	li $v0, 1
	syscall
exit:
	li $v0, 10
	syscall