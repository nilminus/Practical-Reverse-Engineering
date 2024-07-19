	global my_memset
	section .text

my_memset:
	mov ecx, edx	; numbers of bytes
	mov al, sil	; byte to copy from rsi 2nd parameter
			; rdi already contains destination pointer
	rep stosb
	ret
