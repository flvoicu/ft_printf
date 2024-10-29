NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

CC = gcc

SRC =	ft_d.c\
	ft_p.c\
	ft_printf.c\
	ft_s.c\
	ft_u.c\
	ft_x.c\
	ft_c.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ) $(BONUSOBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean all
