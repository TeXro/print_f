CC = cc
SRC = data_type.c ft_printf.c ft_putnbr.c ft_putstr.c \
	  ft_puthex.c ft_putaddress.c ft_putchar.c \
	  ft_strlen.c ft_putunsigned.c
OBJ = ${SRC:.c=.o}
CFLAGS = -Wall -Werror -Wextra
va = valgrind --leak-check=full --show-leak-kinds=all
NAME = libftprintf.a

# co : all
# 	@clear && cc -g main.c libftprintf.a -o zz && $(va) ./zz && rm -rf zz

co : all
	@clear && cc $(CFLAGS) main.c libftprintf.a && ./a.out && rm -rf a.out && rm -rf libftprintf.a
	
all : $(NAME) clean

re : fclean all

$(NAME) : $(OBJ) 
	@ar rcs $(NAME) $(OBJ)

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)


.PHONY: all re clean fclean