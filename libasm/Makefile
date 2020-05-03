NAME = libasm.a

NASM = nasm -f elf64

SRCS =	ft_write.s	\
		ft_read.s	\
		ft_strlen.s	\
		ft_strcpy.s	\
		ft_strdup.s	\
		ft_strcmp.s

OBJS = $(SRCS:.s=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar rc $@ $^
	ranlib $@

%.o : %.s
	$(NASM) $<

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean $(NAME)
