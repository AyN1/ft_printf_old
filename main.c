#include "ft_printf.h"

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

	F("hoge number: %d\n", number);
	printf("digits: %d\n", ft_get_digits(155));
	printf("digits: %d\n", ft_get_digits(-155));
	printf("digits: %d\n", ft_get_digits(123456));
	printf("digits: %d\n", ft_get_digits(-2147483648));
	printf("digits: %d\n", ft_get_digits(2147483647));
	return (0);
}
