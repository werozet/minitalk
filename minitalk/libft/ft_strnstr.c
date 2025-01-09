/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzielins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:21:01 by wzielins          #+#    #+#             */
/*   Updated: 2024/03/07 18:36:56 by wzielins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == 0)
		return ((char *) haystack);
	while (haystack[i] && i < len)
	{
		while (haystack[i + j] == needle[j] && haystack[i + j] && i + j < len)
		{
			j++;
			if (needle[j] == 0)
				return ((char *) haystack + i);
		}
		i++;
		j = 0;
	}
	return (0);
}
/*
#include <stdio.h>

int main() {
    const char *haystack = "Hello, World!";
    const char *needle = "World";
    size_t len = 13;  // Długość części ciągu haystack do przeszukania

    char *result = ft_strnstr(haystack, needle, len);

    if (result != NULL) {
        printf("Znaleziono \"%s\" w ciągu \"%s\"
       	na pozycji %ld.\n", needle, haystack, result - haystack);
    } else {
        printf("Nie znaleziono \"%s\" w ciągu \"%s\".\n", needle, haystack);
    }

    return 0;
}*/
