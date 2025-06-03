# (Do) While-Loop
.text
main:
	li $s0, 0 # sum = 0
	li $t0, 1 # counter = 1
loop:
	add $s0, $s0, $t0 # sum += counter
	addi $t0, $t0, 1 # counter++
	bne $t0, 11, loop # if (counter != 11) go to loop
exit:
	li $v0, 10
	syscall	