.text
main:
	li $s0, 40 # total = 40
	li $t0, 0 # counter = 0
	li $t1, 4 # counter_max = 4
	li $t2, 20
	li $t4, 100
loop:
	add $s0, $s0, $t2 # total += t2(20)
	addi $t0, $t0, 1 # counter++
	bne $t0, $t1, loop # if (counter != counter_max) go to loop
	slt $t3, $t4, $s0
	bne $t3, $zero, over_hun
over_hun:
	sub $s0, $s0, $t4
	move $a0, $s0
	li $v0, 1
	syscall
exit:
	li $v0, 10
	syscall
