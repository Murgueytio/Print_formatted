NAME	=	libftprintf.a

INCLUDE	=	ft_printf.h

CC	=	cc
CFLAGS	=	-Wall -Wextra -Werror

SRC	=	ft_printf.c ft_utils.c

OBJ	=	$(SRC:.c=.o)
AR	=	ar rcs
RM	=	rm -f

all:	$(NAME)

$(NAME):	$(OBJ)
		@$(AR) $(NAME) $(OBJ)

%.o:	%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJ)

fclean:	clean
		$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
