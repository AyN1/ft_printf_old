#include "ft_printf.h"
#include <stdio.h>
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

	F("ayn1\n");
	F("[%s]\n", "ayn1");
	F("[%10.5s]\n", "ayn1");
	F("[%10.2s]\n", "ayn1");
	F("[%3.2s]\n", "ayn1");
	F("[%3.10s]\n", "ayn1");
	F("[%10.0s]\n", "ayn1");
	return (0);
}
