section .text
	global	ft_strdup
	extern	ft_strlen
	extern	ft_strcpy
	extern	malloc

ft_strdup:
	push rbx
	mov rax, 0
	mov rbx, rdi
	call ft_strlen
	inc rax
	mov rdi, rax
	call malloc
	cmp rax, 0
	jz .error
	mov rdi, rax
	push rsi
	mov rsi, rbx
	call ft_strcpy
	pop rsi
	pop rbx
	ret

.error:
	pop rsi
	pop rbx
	mov rax, 0
	ret
