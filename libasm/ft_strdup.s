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
	mov rdi, -1
	call _malloc
	cmp rax, 0
	je _error
	mov rdi, rax
	pop rsi
	call _ft_strcpy
	pop rsi
	pop rbp
	ret
_error:
	call ___error
	mov qword[rax], 12
	mov rax, 0
	pop rdi
	pop rsi
	pop rbp
	ret
