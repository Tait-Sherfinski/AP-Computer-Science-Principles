.data
prompt: .asciiz "Enter an integer: "
prompt2: .asciiz "Enter an integer: "
prompt3: .asciiz "Enter an integer: "
.text
main:
	la $a0, prompt
	li $v0, 4
	syscall
	li $v0, 5
	syscall
	la $a1, prompt2
	li $v0, 4
	syscall
	li $v0, 5
	syscall
	la $a2, prompt3
	li $v0, 4
	syscall
	li $v0, 5
	syscall
	jal order3

order3:	
	bgt	$a0, $a1, exchange1
	bgt	$a1, $a2, exchange2
	b	next
exchange1:	
	xor	$a0, $a0, $a1	#a = a ^= b
	xor	$a1, $a1, $a0	#b = b ^= a
	xor	$a0, $a0, $a1	#a = a ^= b
	b	order3
exchange2:	
	xor	$a1, $a1, $a2	#b = b ^= c
	xor	$a2, $a2, $a1	#c = c ^= b
	xor	$a1, $a1, $a2	#b = b ^= c
	b	order3
next:		
	jr	$ra
