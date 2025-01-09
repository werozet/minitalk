/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzielins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:20:51 by wzielins          #+#    #+#             */
/*   Updated: 2024/02/27 13:59:02 by wzielins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int a)
{
	if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int ft_isalpha(int a);

int main (void)
{
	printf("%d\n", ft_isalpha('2'));
       return (0);	
}
*/
