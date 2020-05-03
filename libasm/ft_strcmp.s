section .text
	global ft_strcmp

ft_strcmp:
	push	rbx
	push	rdx
	mov		rbx, 0
	jmp		.loop

.loop:
	mov		dl, BYTE [rdi + rbx]
	cmp		dl, BYTE [rsi + rbx]	;cmp (s1[rbx], s2[rbx])
	jg		.ret_g
	jl		.ret_l
	.null:
		cmp		BYTE [rdi + rbx], 0
		jz		.ret_e
		inc		rbx
		jmp		.loop

.ret_g:
	pop		rdx
	pop		rbx
	mov		rax, 1
	ret

.ret_l:
	pop		rdx
	pop		rbx
	mov		rax, -1
	ret

.ret_e:
	pop		rdx
	pop		rbx
	mov		rax, 0
	ret
