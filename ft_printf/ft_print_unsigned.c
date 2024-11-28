/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzielins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:33:36 by wzielins          #+#    #+#             */
/*   Updated: 2024/04/17 16:46:51 by wzielins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_unsigned(unsigned int n)
{
	int		len;

	len = 0;
	if (n >= 10)
		len += ft_putnbr_unsigned(n / 10);
	ft_putchar(n % 10 + '0', 1);
	len++;
	return (len);
}

int	ft_print_unsigned(unsigned int n)
{
	int		len;

	len = 0;
	if (n == 0)
	{
		ft_putchar('0', 1);
		len++;
	}
	else
	{
		len += ft_putnbr_unsigned(n);
	}
	return (len);
}
