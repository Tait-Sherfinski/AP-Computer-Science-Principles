.data
hello: .asciiz "Hello, World!"

.text
main:
	la $a0, hello # load address of string into $a0
	li $v0, 4 # Syscall for print string
	syscall # perform syscall
exit:
	li $v0, 10 # syscall for exit
	syscall
