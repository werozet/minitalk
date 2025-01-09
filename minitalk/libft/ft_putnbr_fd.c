/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzielins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:34:27 by wzielins          #+#    #+#             */
/*   Updated: 2024/03/13 16:31:22 by wzielins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}
/*#include <stdio.h>

int main ()
{
	int num0 = -2147483648;
	int num1 = 2147483647;
	int num2 = 69;
	ft_putnbr_fd(num0, 1);
	printf("\n");
	ft_putnbr_fd(num1, 1);
	printf("\n");
	ft_putnbr_fd(num2, 1);
	printf("\n");
	return 0;
}*/
