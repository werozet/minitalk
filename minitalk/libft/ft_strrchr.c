/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzielins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:35:53 by wzielins          #+#    #+#             */
/*   Updated: 2024/03/11 09:53:33 by wzielins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*a;

	i = 0;
	a = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			a = ((char *)s + i);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (a);
}
/*
#include <stdio.h>
 	int	main(void)
 	{
 	char	str[] = "lol111111111111o";
 	int	ch = 'o';
 	char	*ach;
 	ach = ft_strrchr(str, ch);
 	if (ach == NULL)
 		printf ("We didn't find it\n");
 	else
 		printf ("We found it on position - %ld\n", (ach-str+1));
 	return (0);
 }*/
