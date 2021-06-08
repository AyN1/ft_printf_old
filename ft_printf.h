#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_isdigit(char c);
int	ft_isspace(char c);
long long	ft_atoi(char *str);

typedef struct	s_args
{
	int	c;
	int	width;
	int	has_width;
	int	precision;
	int	has_precision;
}				t_args;

void	initialize_args(t_args *args);
char	*read_args(t_args *args, char *itr);
int	ft_printf(const char *format, ...);

#endif
