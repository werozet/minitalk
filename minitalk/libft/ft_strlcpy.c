/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzielins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:06:27 by wzielins          #+#    #+#             */
/*   Updated: 2024/03/01 18:13:52 by wzielins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (src [i] != '\0' && i < (size -1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
#include <stdio.h> // Do wykorzystania funkcji printf()

int main(void)
{
    char src[] = "Hello, world!"; // Źródłowy ciąg znaków
    char dst[20]; // Bufor docelowy, w którym ma zostać skopiowany src
    size_t copied_chars; // Zmienna przechowująca liczbę skopiowanych znaków

    Wywołanie funkcji ft_strlcpy i przypisanie zwróconej wartości do copied_chars
    copied_chars = ft_strlcpy(dst, src, sizeof(dst));

    // Wyświetlenie wyników
    printf("Skopiowano %zu znaków: \"%s\"\n", copied_chars, dst);

    return 0;
}*/
