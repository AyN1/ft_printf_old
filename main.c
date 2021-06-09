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

	F("hoge number: \n", number);
	return (0);
}
