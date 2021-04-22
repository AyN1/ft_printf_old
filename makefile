printf:
	gcc ft_printf.c  -D TEST -o printf
ft_printf:
	gcc ft_printf.c -D TEST -D FT_PRINTF -o  ft_printf
clean:
	/bin/rm ft_printf printf
