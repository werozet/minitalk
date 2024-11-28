/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzielins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:56:36 by wzielins          #+#    #+#             */
/*   Updated: 2024/03/18 15:12:55 by wzielins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen (s + start) < len)
		len = ft_strlen(s + start);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy (str, s + start, len +1);
	return (str);
}
/*
#include <stdio.h>
#include <stdlib.h>  // Dodanie nagłówka dla funkcji malloc
#include <string.h>  // Dodanie nagłówka dla funkcji strlen

// Deklaracja funkcji
char *ft_substr(char const *s, unsigned int start, size_t len);

int main() {
    const char *input_string = "Hello, World!";
    unsigned int start_position = 7;
    size_t substring_length = 5;

    // Wywołanie funkcji ft_substr
    char *result = ft_substr(input_string, start_position, substring_length);

    if (result != NULL) {
        // Wydruk wyniku
        printf("Podciąg: %s\n", result);

        // Zwolnienie zaalokowanej pamięci
        free(result);
    } else {
        printf("Błąd podczas tworzenia podciągu.\n");
    }

    return 0;
}*/
