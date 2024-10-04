section .text
	global ft_strcpy

ft_strcpy:
	push rbx
	push rcx
	mov rbx, 0
	mov rcx, 0
	jmp _cp
	ret

_cp:
	mov cl, byte [rsi + rbx]
	mov byte [rdi + rbx], cl
	cmp byte [rsi + rbx], 0
	jz _ret
	inc rbx
	jmp _cp

_ret:
	mov rax, rsi
	pop rcx
	pop rbx
	ret
