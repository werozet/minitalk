/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzielins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 09:54:08 by wzielins          #+#    #+#             */
/*   Updated: 2024/03/18 15:11:52 by wzielins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	while (i < count * size)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}
/*
#include <stdio.h>
int	main(void)
 {
 	int	*ptr;
 	ptr = (int*)ft_calloc(10, sizeof(int));
 	if (ptr == NULL)
 		printf("Memory not allocated \n");
 	else
 		printf("Memory allocated successfully \n");
 	free(ptr);
 	return (0);
 }
*/
