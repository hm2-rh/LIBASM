NAME = libasm.a
NASM = nasm -f macho64
CC = gcc -Wall -Wextra -Werror

SRCS = ft_read.s \
	   ft_write.s \
	   ft_strlen.s \
	   ft_strcmp.s \
	   ft_strcpy.s \
	   ft_strdup.s

OBJS = $(SRCS:.s=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.s
	$(NASM) $<

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

test: $(NAME)
	cc main.c -L. -lasm -o asm

re: fclean $(NAME)
