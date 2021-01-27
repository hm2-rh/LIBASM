global _ft_strcpy

_ft_strcpy:
	push rcx
	push rbx
	mov rcx, 0
	mov rbx, 0
_loop:
	mov bl, byte[rsi + rcx]
	mov byte[rdi + rcx], bl
	cmp bl, 0
	jz _return
	inc rcx
	jmp _loop
_return:
	mov rax, rdi
	pop rbx
	pop rcx
	ret
