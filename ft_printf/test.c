#include <stdarg.h>
#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_putstr(char *s)
{
	while (*s)
		ft_putchar(*s++);
}

static int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}

static void	ft_putnbr_base(unsigned int nbr, char *base)
{
	int	base_len = ft_strlen(base);

	if (nbr >= base_len)
		ft_putnbr_base(nbr / base_len, base);
	ft_putchar(base[nbr % base_len]);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		printed_chars;

	printed_chars = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%'
		)
		{
			format++;
			if (*format == 'c')
				ft_putchar(va_arg(args, int));
			else if (*format == 's')
				ft_putstr(va_arg(args, char *));
			else if (*format == 'p')
			{
				ft_putstr("0x");
				ft_putnbr_base(va_arg(args, unsigned long), "0123456789abcdef");
			}
			else if (*format == 'd' || *format == 'i')
				ft_putnbr_base(va_arg(args, int), "0123456789");
			else if (*format == 'u')
				ft_putnbr_base(va_arg(args, unsigned int), "0123456789");
			else if (*format == 'x')
				ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef");
			else if (*format == 'X')
				ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF");
			else if (*format == '%')
				ft_putchar('%');
			else
				return (-1); // nieznany format
		}
		else
		{
			ft_putchar(*format);
			printed_chars++;
		}
		format++;
	}
	va_end(args);
	return (printed_chars);
}
