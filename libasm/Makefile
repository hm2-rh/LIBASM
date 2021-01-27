NAME = libasm.a
NASM = nasm -f macho64

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

fclean:
	rm -rf $(NAME)

re: fclean $(NAME)
