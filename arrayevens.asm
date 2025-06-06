.data
array: .word 3, 6, 8, 15, 22, 7, 10, 33, 44, 18
array_size: .word 10
newline: .asciiz "\n"

.text
main:
	la $t0, array # int* t0 = array
	li $t1, 0 # t1(index) = 0
	lw $t2, array_size #t2 = array size
loop:
	beq $t1, $t2, exit # if (index == size) go to exit
	# load array[t1]
	mul $t3, $t1, 4 # calculate offset (word = 4 bytes)
	add $t4, $t0, $t3 # address of array[index]
	lw $t5, 0($t4) # int t5 = *t4;
	# check if even (value % 2 == 0)
	andi $t6, $t5, 1 # t6 = t5 & 1
	bnez $t6, skip # if (t6 != 0) go to skip
	# print value
	move $a0, $t5
	li $v0, 1
	syscall
	# print line break
	la $a0, newline
	li $v0, 4
	syscall
skip:
	addi $t1, $t1, 1 # t1(index)++
	j loop
exit:
	li $v0, 10
	syscall