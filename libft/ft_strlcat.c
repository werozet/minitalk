/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzielins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:56:47 by wzielins          #+#    #+#             */
/*   Updated: 2024/03/06 16:15:19 by wzielins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;
	size_t	j;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	j = dst_len;
	if (dst_len < size - 1 && size > 0)
	{
		while (src[i] && (dst_len + i < size - 1))
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (dst_len >= size)
	{
		dst_len = size;
	}
	return (dst_len + src_len);
}
/*
#include <stdio.h>
int	main(void)

{
 	const char	src[] = "1111111111";
 	char		dst[] = "0987654321";
 	printf("before: %s\n", dst);
 	ft_strlcat(dst, src, 15);
 	printf("after: %s\n", dst);
 	return (0);
 }
*/
