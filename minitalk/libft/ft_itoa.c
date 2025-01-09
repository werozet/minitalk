/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzielins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:31:48 by wzielins          #+#    #+#             */
/*   Updated: 2024/03/18 16:08:33 by wzielins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbnb(int nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		len++;
		nb = -nb;
	}
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_nbnb(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)malloc((len +1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	else if (n == 0)
		str[0] = '0';
	str[len] = '\0';
	while (n != 0)
	{
		str[len - 1] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	return (str);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Testy funkcji ft_itoa
    int number1 = 12345;
    int number2 = -6789;
    int number3 = 0;

    // Wywołanie funkcji ft_itoa
    char *result1 = ft_itoa(number1);
    char *result2 = ft_itoa(number2);
    char *result3 = ft_itoa(number3);

    // Wydruk wyników
    printf("Liczba 1: %d, Wynik: %s\n", number1, result1);
    printf("Liczba 2: %d, Wynik: %s\n", number2, result2);
    printf("Liczba 3: %d, Wynik: %s\n", number3, result3);

    // Zwolnienie zaalokowanej pamięci
    free(result1);
    free(result2);
    free(result3);

    return 0;
}*/
