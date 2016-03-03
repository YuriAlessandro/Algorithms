# This file contains an example of a conditional structure can work in assembly.

	.data
str1:	.asciiz "Digite o primeiro numero: "
str2:	.asciiz "Digite o segundo numero: "
str3:	.asciiz "Resultado: "

	.text
	.globl main

main:	#Reads the first number
	li $v0, 4
	la $a0, str1
	syscall
	
	addi $v0, $zero, 5
	syscall
	
	move $t0, $v0
	
	#Reads the second number
	li $v0, 4
	la $a0, str2
	syscall
	
	addi $v0, $zero, 5
	syscall
	
	move $t1, $v0
	
	#Tests the condition
	#Not printing negative number, so far.
	bne $t0, $zero, cond            # Same that "if (t0 != 0) cond()" --> A kind of function call.
	                                # If it pass the test, he jumps to the label cond.
	subi $t0, $t1, 1
	j RETURN

cond:	sub $t0, $t0, $t1
	addi $t0, $t0, 1

RETURN:	li $v0, 4
        la $a0, str3
	syscall
	
	li $v0, 1
	move $a0, $t0
	syscall
