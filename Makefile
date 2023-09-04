CC		= gcc
CL		= client.c
SR		= server.c
NAMECL	= client
NAMESR	= server
CFLAGS	= -Wall -Wextra -Werror
PRA		= ./ft_printf/libftprintf.a

all :$(PRA) $(NAMECL) $(NAMESR)

$(PRA) :
	@make -C ./ft_printf 

$(NAMECL) :
	@$(CC) $(CL) $(PRA) -o $(NAMECL)

$(NAMESR) :
	@$(CC) $(SR) $(PRA) -o $(NAMESR)
	@echo "\x1b[33mCompilation Success\x1b[0m"
clean :
	@rm -rf server
	@rm -rf client
	@echo "\x1b[33mClean Success\x1b[0m"

fclean : clean
	@make fclean -C ./ft_printf

re : fclean all
	
.PHONY : all re clean fclean
