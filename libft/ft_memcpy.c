/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzielins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:30:12 by wzielins          #+#    #+#             */
/*   Updated: 2024/03/04 18:00:15 by wzielins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dst_temp;
	const char	*src_temp;

	dst_temp = dest;
	src_temp = src;
	if (dest == 0 && src == 0)
		return (dest);
	while (n > 0)
	{
		*dst_temp = *src_temp;
		dst_temp++;
		src_temp++;
		n--;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
 {
 	const char src[10] = "123456";
 	char dst[10] = "";
 	ft_memcpy(dst, src, 6);
 	printf("dst: %s\n", dst);
 	return (0);
}*/
