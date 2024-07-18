	global my_memcpy
	section .text

my_memcpy:
	mov rcx, rdx
	rep movsb
	ret
