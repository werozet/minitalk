/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzielins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:03:13 by wzielins          #+#    #+#             */
/*   Updated: 2024/03/14 16:55:48 by wzielins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	char	*dest;

	if (s1 == 0 || s2 == 0)
		return (0);
	newstr = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (newstr == 0)
		return (0);
	dest = newstr;
	while (*s1)
		*newstr++ = *s1++;
	while (*s2)
		*newstr++ = *s2++;
	*newstr = '\0';
	return (dest);
}
/*
#include <stdio.h>
 int main()
 {
 	char str1[] = "Hello, ";
 	char str2[] = "World!";
 	printf("%s\n", ft_strjoin(str1, str2));
 }*/