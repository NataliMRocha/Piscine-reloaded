CC = gcc
NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
HD = ./includes/

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRC) -I $(HD)
	ar rc $(NAME) *.o

clean:
	rm -f *.o
	
fclean: clean
	rm -f $(NAME)
	rm -f includes/*.*.gch

re: fclean all

.PHONY: all clean fclean