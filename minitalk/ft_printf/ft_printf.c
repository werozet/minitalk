/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzielins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 13:24:23 by wzielins          #+#    #+#             */
/*   Updated: 2024/04/19 20:22:58 by wzielins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long long n, char format)
{
	int		len;
	char	*hex_digits;
	char	str[100];
	int		temp;

	len = 0;
	if (format == 'x')
		hex_digits = "0123456789abcdef";
	else if (format == 'X')
		hex_digits = "0123456789ABCDEF";
	if (n == 0)
	{
		ft_putchar ('0', 1);
		return (1);
	}
	while (n != 0)
	{
		str[len] = (hex_digits[n % 16]);
		n /= 16;
		len++;
	}
	temp = len;
	while (len--)
		ft_putchar(str[len], 1);
	return (temp);
}

int	ft_format(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_printchar(va_arg(args, int));
	else if (format == 's')
		len += ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		len += ft_print_point(va_arg(args, void *));
	else if (format == 'd' || format == 'i')
		len += ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		len += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		len += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		len += ft_printpercent();
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_format(args, str[i + 1]);
			i++;
		}
		else
			len += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
/*
#include <stdio.h>
#include <limits.h>
int	main()
{
	char	*s;
	int		i;

	s = "hejka";
	i = 42;

	//ft_printf("%p\n%p\n", (void *)LONG_MAX, (void *)LONG_MIN);

	printf("%p\n%p\n", (void *)LONG_MAX, (void *)LONG_MIN);
	return (0);
}*/
