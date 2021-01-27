global _ft_strdup
extern _malloc
extern ___error
extern _ft_strlen
extern _ft_strcpy

_ft_strdup:
	push rbp
	push rsi
	call _ft_strlen
	push rdi
	mov rdi, rax
	inc rdi
	call _malloc
	cmp rax, 0
	jz _error
	mov rdi, rax
	pop rsi
	call _ft_strcpy
	pop rsi
	pop rbp
	ret
_error:
	push rax
	call ___error
	pop qword[rax]
	pop rdi
	pop rsi
	mov rax, 0
	ret
