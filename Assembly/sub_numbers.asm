	.data
str1:	.asciiz "Result: "

str2:	.asciiz "Type the first number: "
str3:	.asciiz "Type the second number: "

	.text
	.globl main

main:
	#Reads the first number
	li $v0, 4
	la $a0, str2
	syscall
	
	addi $v0, $zero, 5
	syscall
	
	move $t0, $v0
	
	#Reads the second number
	li $v0, 4
	la $a0, str3
	syscall
	
	addi $v0, $zero, 5
	syscall
	
	move $t1, $v0
	
	#Makes the operation 
	sub $t2, $t0, $t1
	
	#Prints the string "Result"
	li $v0, 4
	la $a0, str1
	syscall
	
	#Print the result
	li $v0, 1
	add $a0, $t2, $zero
	syscall
	
