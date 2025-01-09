/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzielins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 18:14:44 by wzielins          #+#    #+#             */
/*   Updated: 2024/03/04 14:00:32 by wzielins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	a;
	char	*temp;

	a = 0;
	temp = s;
	while (n > a)
	{
		temp[a] = c;
		a++;
	}
	return (s);
}
/*
#include <stdio.h>

int	main(void)
{
 	char	temp[] = "Hello Wold!";

 	ft_memset (temp, 'a', 5);
 	printf ("temp: %s\n", temp);
 	return (0);
}*/
