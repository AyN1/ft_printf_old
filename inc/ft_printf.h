#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_isdigit(char c);
int		ft_iswhitespace(char c);
long	ft_atol(const char *str);
int		ft_atoi(const char *str);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);

typedef struct s_args
{
	int	c;
	int	width;
	int	has_width;
	int	precision;
	int	has_precision;
}				t_args;

int		ft_get_digits(int d);
void	initialize_args(t_args *args);
char	*read_args(t_args *args, char *itr);
int		ft_printf(const char *format, ...);

#endif
