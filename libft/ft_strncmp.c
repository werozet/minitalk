/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzielins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:04:23 by wzielins          #+#    #+#             */
/*   Updated: 2024/03/07 18:27:48 by wzielins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char) s1[i] != (unsigned char) s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int		main(void)
 {
 	char	str1[] = {"424642"};
 	char	str2[] = {"424242"};
 	if (ft_strncmp(str1, str2, 4) == 0)
 		printf("First 4 symbols are identical\n");
 	else
 		printf("First 4 symbols are not identical\n");
 	return (0);
 }*/
