#include "ft_printf.h"

long long	ft_atoi(char *str)
{
	long long	res;
	long long	max;
	int			sign;

	max = 0x7fffffffffffffff;
	while (ft_iswhitespace(*str))
		str++;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		sign = (*str == '-') ? -1 : 1;
		str++;
	}
	printf("sign = %d\n", sign);
	res = 0;
	while (ft_isdigit(*str))
	{
		if (res < max - (*str - '0') / 10)
			res = 10 * res + (*str - '0');
		else
			res = (sign == -1) ? (max + 1) : max;
		str++;
	}
	return (res * sign);
}

void	initialize_args(t_args *args)
{
	args->c = 0;
	args->width = 0;
	args->has_width = 0;
	args->precision = 0;
	args->has_precision = 0;
}

char	*read_args(t_args *args, char *itr)
{
	if (!itr || *itr == '%')
		return (itr);
	while (*itr)
	{
		initialize_args(args);
		// width
		if (ft_isdigit(*itr))
		{
			args->has_width = 1;
			args->width = ft_atoi(itr);
		}
		// width
		// .
		// precision
		itr++;
	}
	return (itr);
}

int	ft_printf(const char *format, ...)
{
	char	*itr;
	int		res;
	t_args	args;

	itr = (char *)format;
	if (!itr)
		return (0);
	res = 0;
	while (*itr)
	{
		if (*itr == '%')
		{
			continue ;
		}
		res += ft_putchar(*itr);
		itr++;
	}
	return (res);
}
