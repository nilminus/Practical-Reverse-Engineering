	global my_strchr
	section .text

my_strchr:
	cmp byte [rdi], sil
	jz found		; Did we find the char?

	cmp byte [rdi], 0
	jz endofstring	; Did we reach end of string?

	inc rdi
	jmp my_strchr

endofstring:
	mov rdi, 0

found:
	mov rax, rdi
	ret
