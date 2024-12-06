CC = cc
SRC = data_type.c ft_printf.c ft_putnbr.c ft_putstr.c \
	  ft_puthex.c ft_putaddress.c ft_putchar.c \
	  ft_strlen.c ft_putunsigned.c
OBJ = ${SRC:.c=.o}
CFLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a

all : $(NAME)

$(NAME) : $(OBJ)
	@ar rcs $(NAME) $(OBJ)

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean :
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean