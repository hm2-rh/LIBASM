section .text
	global ft_strcmp

ft_strcmp:
	push	rbx
	push	rdx
	mov		rbx, 0
	mov		rdx, 0

.loop:
	mov		dl, BYTE [rdi + rbx]
	cmp		dl, BYTE [rsi + rbx]
	jnz		.diff
	cmp		dl, 0
	jz		.diff
	inc		rbx
	jmp		.loop

.diff:
	mov		al, BYTE [rdi + rbx]
	mov		dl, BYTE [rsi + rbx]
	sub		rax, rdx
	pop		rdx
	pop		rbx
	ret
