.text
main:
	li $a0, 5
	li $a1, 7
	jal add_ints # add_ints(a0, a1)
	move $t0, $v0
exit:
	li $v0, 10
	syscall
	
## add_ints(a0: int, a1: int)
# returns v0 - the sum of a0 + a1
add_ints:
	add $v0, $a0, $a1 # v0 = a0 + a1
	jr $ra #return v0