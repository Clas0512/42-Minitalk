SRCS	= ft_printf.c ft_ofuncts.c
OBJS	= $(SRCS:.c=.o)

NAME	= libftprintf.a
RM		= rm -rf
CFLAGS	= -Wall -Wextra -Werror
CC		= gcc

all: $(OBJS) $(NAME)
	@$(CC) $(CFLAGS) -c -o ft_printf.o ft_printf.c
	@$(CC) $(CFLAGS) -c -o ft_ofuncts.o ft_ofuncts.c

$(NAME):
	@ar rc $(NAME) $(OBJS)
	@echo $(MYFACE)

clean :
	@$(RM) $(OBJS)

fclean : clean
	@$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re
