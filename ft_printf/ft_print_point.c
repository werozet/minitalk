/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_point.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzielins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:19:54 by wzielins          #+#    #+#             */
/*   Updated: 2024/04/19 18:33:52 by wzielins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_point(void *ptr)
//int	ft_print_point(unsigned long int ptr)
{
	int			len;

	len = 0;
	if (ptr == 0)
	{
		return (len += write(1, "(nil)", 5));
	}
	else
	{
		len += write(1, "0x", 2);
		len += ft_print_hex((unsigned long long)ptr, 'x');
	}
	return (len);
}
