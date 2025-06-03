.data
prompt: .asciiz "Enter an integer: "
.text
main:
	# print the prompt
	la $a0, prompt
	li $v0, 4
	syscall
	
	#read integer
	li $v0, 5 # syscall for read int, stores in $v0
	syscall
	
	# print integer
	move $a0, $v0 # $a0 = $v0
	li $v0, 1 # syscall for print int 
	syscall
exit:
	li $v0, 10
	syscall