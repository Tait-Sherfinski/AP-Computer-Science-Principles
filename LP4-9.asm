.data
prompt: .asciiz "Enter a number between 1 and 20: "
prtcpu: .asciiz "\nCPU number: "
prtusr: .asciiz "\nYour number: "
prtwin: .asciiz "\nYou win"
prtlos: .asciiz "\nYou lose"

.text
main:
	
	li $a1, 20
	li $v0, 42
	syscall
	add $s0, $a0, 1
	la $a0, prompt
	li $v0, 4
	syscall
	li $v0, 5
	syscall
	move $t0, $v0
	
	la $a0, prtcpu
	li $v0, 4
	syscall
	move $a0, $s0
	li $v0, 1
	syscall
	
	la $a0, prtusr
	li $v0, 4
	syscall
	move $a0, $t0
	li $v0, 1
	syscall
	
	bne $t0, $s0, do_lose
do_win:
	la $a0, prtwin
	li $v0, 4
	syscall
	j exit
do_lose:
	la $a0, prtlos
	li $v0, 4
	syscall
exit:
	li $v0, 10
	syscall