#include <stdio.h>
#include <stdlib.h>

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
	int			sign;
	int			debug = 0;
	int			debug2 = 0;

	max = 0x7fffffffffffffff;
	while (ft_isspace(*str))
		str++;
	sign = 1;
	if (*str == '-' || * str == '+')
	{
		sign = (*str == '-') ? -1 : 1;
		str++;
	}
	res = 0;
	while (ft_isdigit(*str) && res < max)
	{
		// printf("res: %lld\n", res);
		if (res < (max - (*str - '0')) / 10)
		{
			debug++;
			res = 10 * res + (*str - '0');
		}
		else
			{
				res = (sign == -1) ? (max + 1) : max;
				debug2++;
			}
		str++;
	}
	printf("if condition = %d\telse condition = %d\n", debug, debug2);
	return (res * sign);
}

int	main(void)
{
	int	res;
	int	number = 5;
	int	i = '0';
	long long max = 0x7fffffffffffffff;
	char	*test1 = "-9223372036854775807";
	char	*test2 = "-9223372036854775807";

	printf("ft_atoi:\t %lld\n", ft_atoi(test1));
	// printf("ft_atoll:\t %lld\n", ft_atoll(test1));
	printf("libc:\t\t %lld\n\n", atoll(test1));
	// printf("ft_:\t %lld\n", ft_atoi(test2));
	// printf("libc:\t %lld\n", atoll(test2));

	printf("\tmax = %lld\n", max);
	// while (i <= '9')
	// {
		// printf("test: c = %c, result: %lld\n", i, (max - (i - '0')) / 10);
		// ++i;
	// }
	return (0);
}
