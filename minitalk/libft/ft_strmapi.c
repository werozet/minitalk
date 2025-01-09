/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzielins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:49:53 by wzielins          #+#    #+#             */
/*   Updated: 2024/03/13 10:41:37 by wzielins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	int		i;
	char	*str;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdlib.h>
#include <stdio.h>
 	
// Przykładowa funkcja, która dodaje 1 do każdego znaku
char add_one(unsigned int index, char c) {
    return c + 1;
}

int main() {
    // Testy funkcji ft_strmapi
    const char *input_string = "Hello, World!";

    // Wywołanie funkcji ft_strmapi
    char *result = ft_strmapi(input_string, add_one);

    // Wydruk wyniku
    printf("Oryginalny łańcuch: %s\n", input_string);
    printf("Zmodyfikowany łańcuch: %s\n", result);

    // Zwolnienie zaalokowanej pamięci
    free(result);

    return 0;
}*/
