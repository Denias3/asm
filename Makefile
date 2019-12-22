NAME = asm

SRC = asm.c

INCLUDES = ft_printf/libftprintf.a

all: $(NAME)

$(NAME): $(SRC)
		@make -C ft_printf
		@gcc -Wall -Werror -Wextra -g $(SRC) $(INCLUDES) -o $(NAME)
		@echo "-> compil asm"

comp:
		@gcc -Wall -Werror -Wextra -g $(SRC) $(INCLUDES) -o $(NAME)
		@echo "-> comp asm"

clean:
		@make clean -C ft_printf
		@echo "-> clean asm"
fclean: clean
		@make fclean -C ft_printf
		@rm -f $(NAME)
		@echo "-> fclean asm"

re: fclean all
		@echo "-> re asm"