#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>

#ifdef FT_PRINTF
#define F(...) \
res = ft_printf(__VA_ARGS__); \
printf("res: %d\n", res);
#else
#define F(...) \
res = printf(__VA_ARGS__); \
printf("res: %d\n", res);
#endif


int	main(void)
{
	int	res;
	setvbuf(stdout, 0, _IONBF, 0);
	int	number = 5;

	F("ayn1\n");
	F("[%s]\n", "ayn1");
	F("[%10.5s]\n", "ayn1");
	F("[%10.2s]\n", "ayn1");
	F("[%3.2s]\n", "ayn1");
	F("[%3.10s]\n", "ayn1");
	F("[%10.0s]\n\n", "ayn1");

	F("[%s]\n", NULL);
	F("[%10.5s]\n", NULL);
	F("[%10.2s]\n", NULL);
	F("[%3.2s]\n", NULL);
	F("[%3.10s]\n", NULL);
	F("[%10.0s]\n\n", NULL);

	F("%d\n", 155);
	F("%d\n", -155);
	F("%d\n", 0);
	F("%d\n", -0);
	F("%d\n", 2147483647);
	F("%d\n\n", -2147483648);

	F("[%.0d]\n", -2147483648);
	F("[%.5d]\n", -2147483648);
	F("[%.10d]\n", -2147483648);
	F("[.11: %.11d]\n", -2147483648);
	F("[.12: %.12d]\n", -2147483648);
	F("[.20: %.20d]\n", -2147483648);
	F("[%.d]\n\n", -2147483648);

	F("[%0.d]\n", -2147483648);
	F("[%5.d]\n", -2147483648);
	F("[%10.d]\n", -2147483648);
	F("[%11.d]\n", -2147483648);
	F("[%12.d]\n", -2147483648);
	F("[%20.d]\n\n", -2147483648);

	F("[%0.15d]\n", -2147483648);
	F("[%5.15d]\n", -2147483648);
	F("[%10.15d]\n", -2147483648);
	F("[%11.15d]\n", -2147483648);
	F("[%12.15d]\n", -2147483648);
	F("[%17.15d]\n", -2147483648);
	F("[%17.11d]\n", -2147483648);
	F("[%20.15d]\n\n", -2147483648);

	F("[%0.0d]\n", -2147483648);
	F("[%5.0d]\n", -2147483648);
	F("[%10.0d]\n", -2147483648);
	F("[%20.0d]\n", -2147483648);
	F("[%0.0d]\n", -2147483648);
	F("[%0.5d]\n", -2147483648);
	F("[%0.10d]\n", -2147483648);
	F("[%0.20d]\n", -2147483648);
	F("[%5.0d]\n", -2147483648);
	F("[%5.5d]\n", -2147483648);
	F("[%5.10d]\n", -2147483648);
	F("[%5.20d]\n", -2147483648);
	F("[%10.0d]\n", -2147483648);
	F("[%10.5d]\n", -2147483648);
	F("[%10.10d]\n", -2147483648);
	F("[%10.20d]\n", -2147483648);
	F("[%20.0d]\n", -2147483648);
	F("[%20.5d]\n", -2147483648);
	F("[%20.10d]\n", -2147483648);
	F("[%20.20d]\n\n", -2147483648);

	F("[%10d]\n", 0);
	F("[%10.d]\n", 0);
	F("[%10.0d]\n", 0);
	F("[%.0d]\n", 0);
	F("[%10.0d]\n", 10);
	F("[%.0d]\n", -120);

	F("--X--\n")// x

	F("%x\n", 155);
	F("%x\n", -155);
	F("%x\n", 0);
	F("%x\n", -0);
	F("%x\n", 2147483647);
	F("%x\n\n", -2147483648);

	F("[%.0x]\n", -2147483648);
	F("[%.5x]\n", -2147483648);
	F("[%.10x]\n", -2147483648);
	F("[.11: %.11x]\n", -2147483648);
	F("[.12: %.12x]\n", -2147483648);
	F("[.20: %.20x]\n", -2147483648);
	F("[%.x]\n\n", -2147483648);

	F("[%0.x]\n", -2147483648);
	F("[%5.x]\n", -2147483648);
	F("[%10.x]\n", -2147483648);
	F("[%11.x]\n", -2147483648);
	F("[%12.x]\n", -2147483648);
	F("[%20.x]\n\n", -2147483648);

	F("[%0.15x]\n", -2147483648);
	F("[%5.15x]\n", -2147483648);
	F("[%10.15x]\n", -2147483648);
	F("[%11.15x]\n", -2147483648);
	F("[%12.15x]\n", -2147483648);
	F("[%17.15x]\n", -2147483648);
	F("[%17.11x]\n", -2147483648);
	F("[%20.15x]\n\n", -2147483648);

	F("[%0.0x]\n", -2147483648);
	F("[%5.0x]\n", -2147483648);
	F("[%10.0x]\n", -2147483648);
	F("[%20.0x]\n", -2147483648);
	F("[%0.0x]\n", -2147483648);
	F("[%0.5x]\n", -2147483648);
	F("[%0.10x]\n", -2147483648);
	F("[%0.20x]\n", -2147483648);
	F("[%5.0x]\n", -2147483648);
	F("[%5.5x]\n", -2147483648);
	F("[%5.10x]\n", -2147483648);
	F("[%5.20x]\n", -2147483648);
	F("[%10.0x]\n", -2147483648);
	F("[%10.5x]\n", -2147483648);
	F("[%10.10x]\n", -2147483648);
	F("[%10.20x]\n", -2147483648);
	F("[%20.0x]\n", -2147483648);
	F("[%20.5x]\n", -2147483648);
	F("[%20.10x]\n", -2147483648);
	F("[%20.20x]\n\n", -2147483648);

	F("[%10x]\n", 0);
	F("[%10.x]\n", 0);
	F("[%10.0x]\n", 0);
	F("[%.0x]\n", 0);
	F("[%10.0x]\n", 10);
	F("[%.0x]\n\n", -120);

	F("%s, %10.s, %d, %x\n", "hoge", "fuga", 10, -123, "test");
	return (0);
}
