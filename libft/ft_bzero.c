/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzielins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:02:25 by wzielins          #+#    #+#             */
/*   Updated: 2024/03/04 14:38:03 by wzielins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void*s, size_t n)
{
	size_t	i;
	char	*temp;

	i = 0;
	temp = s;
	while (i < n)
	{
		temp[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
int	main(void)
 {
 	unsigned char	str[]="1234567890";
 	ft_bzero(str, 5);
	printf ("str: %s!\n",str);
 	return 0;
 }*/
