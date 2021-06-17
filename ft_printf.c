#include "ft_printf.h"
#define CONV "sdxc"

int	ft_putstrl(char *str, int len)
{
	int	res;
	int	i;

	if (!str)
		return (0);
	res = 0;
	i = 0;
	while (str[i] && i < len)
	{
		res += ft_putchar(str[i]);
		i++;
	}
	return (res);
}

int	ft_get_digits(int d)
{
	int	digits;

	if (d == -2147483648)
		return (11);
	digits = 0;
	if (d < 0)
	{
		digits++;
		d *= -1;
	}
	while (d / 10)
	{
		digits++;
		d /= 10;
	}
	digits++;
	return (digits);
}

int	ft_get_digits_x(unsigned int ud)
{
	int	digits;

	digits = 0;
	while (ud / 16)
	{
		digits++;
		ud /= 16;
	}
	digits++;
	return (digits);
}

void	initialize_args(t_args *args)
{
	args->c = 0;
	args->width = 0;
	args->has_width = 0;
	args->precision = 0;
	args->has_precision = 0;
	args->is_negative = 0;
}

char	*read_args(t_args *args, char *itr)
{
	if (!itr || *itr != '%')
		return (itr);
	itr++;
	while (*itr)
	{
		initialize_args(args);
		if (*itr == '-')
		{
			args->is_negative = 1;
			itr++;
		}
		// width
		if (ft_isdigit(*itr))
		{
			args->has_width = 1;
			args->width = ft_atoi(itr);
			itr += ft_get_digits(args->width);
		}
		// .
		if (*itr == '.')
		{
			args->has_precision = 1;
			itr++;
		}
		// precision
		if (ft_isdigit(*itr))
		{
			args->has_precision = 1;
			args->precision = ft_atoi(itr);
			itr += ft_get_digits(args->precision);
		}
		//dxs
		if (ft_strchr(CONV, *itr))
		{
			args->c = *itr;
			itr++;
			return (itr);
		}
		itr++;
	}
	return (itr);
}

int	ft_put_s(t_args *args, va_list ap)
{
	int		res;
	int		width;
	int		precision;
	int		len;
	int		putlen;
	char	*s;

	width = args->has_width ? args->width : 0;
	precision = args->has_precision ? args->precision : 0;
	s = va_arg(ap, char *);
	if (!s)
		s = "(null)";
	len = ft_strlen(s);
	if (args->has_precision)
		putlen = (len > precision) ? precision : len;
	else
		putlen = len;
	res = 0;
	while ((width - putlen) > 0)
	{
		res += ft_putchar(' ');
		width--;
	}
	return (res + ft_putstrl(s, putlen));
}

#include <stdio.h>

int ft_putx(unsigned int ud, int padding)
{
	int	res;

	res = 0;
	while (padding-- > 0)
		res += ft_putchar('0');
	if (ud / 16)
		res += ft_putx(ud / 16, padding);
	if ((ud % 16) >= 10)
		res += ft_putchar((ud % 16) - 10 + 'a');
	else
		res += ft_putchar((ud % 16) + '0');
	return (res);
}

int	ft_puti(int d, int padding)
{
	int res;

	res = 0;
	if (d == -2147483648)
	{
		res += ft_putchar('-');
		while (padding-- > 0)
			res += ft_putchar('0');
		res += ft_putstr("2147483648");
		return (res);
	}
	if (d < 0)
	{
		res += ft_putchar('-');
		d *= -1;
	}
	while (padding-- > 0)
		res += ft_putchar('0');
	if (d / 10)
		res += ft_puti(d / 10, padding);
	res += ft_putchar((d % 10) + '0');
	return (res);
}

int	ft_put_d(t_args *args, va_list ap)
{
	int	width;
	int	precision;
	int	d;
	int	len;
	int	putlen;
	int	padding;
	int	res;

	width = args->has_width ? args->width : 0;
	precision = args->has_precision ? args->precision : 0;
	d = va_arg(ap, int);
	len = ft_get_digits(d);
	if (args->is_negative == 1)
	{
		res += ft_puti(d, padding);
			while (width > len++)
				res += ft_putchar(' ');
		return(res);
	}
	if (args->has_precision && args->precision == 0 && d == 0)
		len = 0;
	if (d < 0)
		padding = ((len - 1) < precision) ? precision - (len - 1) : 0;
	else
		padding = (len < precision) ? precision - len : 0;
	putlen = len + padding;
	res = 0;
	// printf("len = %d", len);
	while ((width-- - putlen) > 0)
		res += ft_putchar(' ');
	if (args->has_precision && args->precision == 0 && d == 0)
		return (res);
	return (res + ft_puti(d, padding));
}

int ft_put_x(t_args *args, va_list ap)
{
	int	width;
	int	precision;
	int	d;
	int	len;
	int	putlen;
	int	padding;
	int	res;

	width = args->has_width ? args->width : 0;
	precision = args->has_precision ? args->precision : 0;
	d = va_arg(ap, int);
	len = ft_get_digits_x(d);
	if (args->has_precision && args->precision == 0 && d == 0)
		len = 0;
	padding = (len < precision) ? precision - len : 0;
	putlen = len + padding;
	res = 0;
	while ((width - putlen) > 0)
	{
		res += ft_putchar(' ');
		width--;
	}
	if (args->has_precision && args->precision == 0 && d == 0)
		return (res);
	return (res + ft_putx(d, padding));
}

int	ft_putc(int c)
{
	int	res;

	res = 0;
	res += ft_putchar(c);
	return (res);
}

int ft_put_c(t_args *args, va_list ap)
{
	int	d;
	int	len;
	int	res;

	d = va_arg(ap, int);
	len = 1;
	res = 0;
	while ((args->width-- > len))
		res += ft_putchar(' ');
	return (res + ft_putc(d));
}

int	ft_put_conv(t_args *args, va_list ap)
{
	if(args->c == 's')
		return (ft_put_s(args, ap));
	else if (args->c == 'd')
		return (ft_put_d(args, ap));
	else if (args->c == 'x')
		return (ft_put_x(args, ap));
	else if (args->c == 'c')
		return (ft_put_c(args, ap));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		res;
	t_args	args;
	va_list	ap;

	res = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			format = read_args(&args, (char*)format);
			res += ft_put_conv(&args, ap);
			continue ;
		}
		res += ft_putchar(*format);
		format++;
	}
	va_end(ap);
	return (res);
}
