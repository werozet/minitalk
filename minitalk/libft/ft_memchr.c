/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzielins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 13:57:03 by wzielins          #+#    #+#             */
/*   Updated: 2024/03/18 12:29:46 by wzielins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	char		cc;	
	size_t		i;

	str = (const char *)s;
	cc = (char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == cc)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main() {
    const char *input_string = "Hello, World!";
    char search_char = 'W';
    size_t search_length = 13;  // Długość ciągu do przeszukania

    // Wywołanie funkcji
    void *result = ft_memchr(input_string, search_char, search_length);

    if (result != NULL) {
        printf("Znaleziono znak '%c'
       	w ciągu na pozycji %ld.\n", search_char, (char *)result - input_string);
    } else {
        printf("Znak '%c' nie został znaleziony w ciągu.\n", search_char);
    }

    return 0;
}*/
