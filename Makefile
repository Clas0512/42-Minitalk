CC		= gcc
CL		= client.c
SR		= server.c
NAMECL	= client
NAMESR	= server
PRWAY	= make -C ./ft_printf
CFLAGS	= -Wall -Wextra -Werror
PRA		= ./ft_printf/libftprintf.a

all :$(PRA) $(NAMECL) $(NAMESR)

$(PRA) :
	$(PRWAY)

$(NAMECL) :
	@$(CC) $(CL) $(PRA) -o $(NAMECL)

$(NAMESR) :
	@$(CC) $(SR) $(PRA) -o $(NAMESR)
clean :
	@rm -rf server
	@rm -rf client
	@echo "\033[0;37mFCLEAN HAS DONE"

fclean : clean
	@make fclean -C ./ft_printf

re : fclean all
	
.PHONY : all re clean fclean
