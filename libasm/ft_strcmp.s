global _ft_strcmp

_ft_strcmp:
	push rcx
	push rbx
	push rdx
	mov rbx, 0
	mov rcx, 0
	mov rdx, 0
_loop:
	mov bl, byte[rdi + rcx]
	cmp bl, byte[rsi + rcx]
	jnz _diff
	cmp bl, 0
	jz _diff
	inc rcx
	jmp _loop
_diff:
	mov dl, byte[rsi + rcx]
	sub rbx, rdx
	cmp rbx, 0
	jg _great
	jl _less
	mov rax, 0
	pop rdx
	pop rbx
	pop rcx
	ret
_great:
	mov rax, 1
	pop rdx
	pop rbx
	pop rcx
	ret
_less:
	mov rax, -1
	pop rdx
	pop rbx
	pop rcx
	ret
