#ifdef TEST

#include <unistd.h>

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

int	ft_printf(const char *format, ...)
{
	return ft_putstr((char*)format);
}

#include <stdio.h>

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
	F("hoge\tnumber = %d\n", number);
	ft_printf("test ft_printf");

	return (0);
}
#endif
