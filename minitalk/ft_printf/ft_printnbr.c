/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzielins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:30:20 by wzielins          #+#    #+#             */
/*   Updated: 2024/04/19 15:19:30 by wzielins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(long long int num)
{
	int	len;
	int	divisor;

	len = 0;
	if (num < 0)
	{
		ft_putchar('-', 1);
		len++;
		num = -num;
	}
	divisor = 1;
	while (num / divisor > 9)
		divisor *= 10;
	while (divisor > 0)
	{
		ft_putchar('0' + num / divisor, 1);
		len++;
		num %= divisor;
		divisor /= 10;
	}
	return (len);
}
