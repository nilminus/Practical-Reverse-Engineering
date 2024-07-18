	global main
	extern printf
	extern puts

	section .text

main:
	push rsi
	push rdi
	sub rsp, 8	; save registers

	mov rdi, [rsi+8]
	mov al, 0
	mov ecx, 0xffffffff
	cld
	repne scasb
	not ecx
	dec ecx

	mov rsi, rcx
	mov rdi, format
	call printf

	add rsp, 8
	pop rdi
	pop rsi
	
	ret

format:
	db "The length is: %d", 10, 0
