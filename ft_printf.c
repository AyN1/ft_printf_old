#ifdef TEST

#include <unistd.h>
#include <stdio.h>

int	ft_putchar(char c)
{
	return write(1, &c, 1);
}

int	ft_putstr(char *str)
{
	int	res;
	if (!str)
		return (0);
	while (*str)
	{
		res += ft_putchar(*str);
		str++;
	}
}

typedef struct	s_args
{
	int	c;
	int	width;
	int	has_width;
	int	precision;
	int	has_precision;
}				t_args;

int 	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_isspace(char c)
{
	return (c >= 9 && c <= 13)  || (c == 32);
}

long long	ft_atoi(char *str)
{
	long long 	res;
	long long	max;
	int		sign;

	max = 0x7fffffffffffffff;
	while  (ft_isspace(*str))
		str++;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		sign = (*str == '-') ? -1 : 1;
		str++;
	}
	printf("sign = %d\n", sign);
//	printf("res: %lld\n", res);
	res = 0;
	while (ft_isdigit(*str))
	{
		if (res < max - (*str - '0') / 10)
			res = 10 * res + (*str - '0');
		else
		{
			res = (sign == -1) ? (max + 1) : max;
			printf("else\n");
		}
	str++;
	}
//	printf("res: %lld\n", res);
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
	int	res;
	t_args	args;

	itr = (char *)format;
	if (!itr)
		return (0);
	res = 0;
	while (*itr)
	{
		if (*itr == '%')
		{
			continue;
		}
		res +=  ft_putchar(*itr);
		itr++;
	}
	return (res);
}

#include <stdlib.h>

#ifdef FT_PRINTF
#define F(...) \
res = ft_printf(__VA_ARGS__);
#else
#define F(...) \
res = printf(__VA_ARGS__);
#endif


int	main(void)
{
	int	res;
	int	number = 5;
	int	i = '0';
	long long max = 0x7fffffffffffffff;

	F("hoge\n");
	printf("%lld\n", ft_atoi("-922807"));
//	printf("%lld\n", ft_atoi("-92233720368547758078"));
	printf("\n");
//	printf("%lld\n", atoll("-9223372036854775807z"));
//	printf("%lld\n", atoll("-9223372036854775808"));

//	while (i <= '9')
//	{
//		printf("test: c = %c, result: %lld\n", i, max - (i - '0') / 10);
//		++i;
//	}
	return (0);
}
#endif
