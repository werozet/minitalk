/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzielins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:12:12 by wzielins          #+#    #+#             */
/*   Updated: 2024/03/15 12:15:45 by wzielins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s == 0 || f == 0)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>
void	print_index_and_char(unsigned int index, char *c)
{
	printf("Index: %u, Character: %c\n", index, *c);
}

int	main(void)
{
	char str[] = "Hello";

	// Wywołanie funkcji ft_striteri 
//	z funkcją print_index_and_char jako argumentem
	ft_striteri(str, &print_index_and_char);

	return (0);
}
*/