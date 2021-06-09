all: ft_printf printf

test:
	./test.sh

printf: ft_printf.c
	@gcc main.c ft_printf.c libft.a  -o printf

ft_printf: ft_printf.c
	@gcc main.c ft_printf.c libft.a -D FT_PRINTF -o  ft_printf

clean:
	@/bin/rm ft_printf printf
