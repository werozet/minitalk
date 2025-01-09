/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzielins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:24:02 by wzielins          #+#    #+#             */
/*   Updated: 2024/03/01 12:02:02 by wzielins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	l;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char s[] = "Hello";
 	printf("%ld\n", ft_strlen(s));
 	return (0);
}*/
