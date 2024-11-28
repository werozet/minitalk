/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzielins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:59:07 by wzielins          #+#    #+#             */
/*   Updated: 2024/03/11 13:40:23 by wzielins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			a;

	a = (char) c;
	i = 0;
	if (*s == '\0')
		return ((char *)s);
	while (s[i] != '\0')
	{
		if (s[i] == a)
		{
			return ((char *)s + i);
		}
		i++;
	}
	if (s[i] == a)
	{
		return ((char *)s + i);
	}
	return (0);
}

/*
#include <stdio.h>

int main() 
{
    const char *test_string = "Hello, World!";
    int search_char = 'W';

    char *result = strchr(test_string, search_char);

    if (result != NULL)
    {
printf("Znak '%c' został znaleziony na pozycji %ld.\n",
search_char, result - test_string);
    } else {
        printf("Znak '%c' nie został znaleziony w ciągu.\n", search_char);
    }

    return 0;
}
#incude <string.h>

int main() {
    const char *test_string = "Hello, World!";
    int search_char = 'W';

    // Użycie twojej funkcji ft_strchr
    char *result_ft = ft_strchr(test_string, search_char);

    // Użycie standardowej funkcji strchr
    char *result_std = strchr(test_string, search_char);

    // Porównanie wyników
    if (result_ft != NULL && result_std != NULL && result_ft == result_std) {
        printf("Twoja funkcja ft_strchr działa poprawnie!\n");
    } else {
        printf("Wyniki różnią się lub są nieprawidłowe.\n");
    }

    return 0;
}*/
