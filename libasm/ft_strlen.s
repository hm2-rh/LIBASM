global _ft_strlen

_ft_strlen:
	push rcx
	mov rcx, 0
_loop:
	cmp byte [rdi + rcx], 0
	jz _return
	inc rcx
	jmp _loop
_return:
	mov rax, rcx
	pop rcx
	ret
