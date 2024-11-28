/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzielins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:01:10 by wzielins          #+#    #+#             */
/*   Updated: 2024/03/18 15:23:16 by wzielins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*str;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL || *set == '\0')
		return (ft_strdup(s1));
	i = 0;
	j = ft_strlen(s1) - 1;
	while (i <= j && ft_strchr(set, s1[i]))
		i++;
	while (j >= i && ft_strchr(set, s1[j]))
		j--;
	if (i > j)
		return (ft_strdup(""));
	str = malloc(sizeof(char) * (j - i + 2));
	if (str == 0)
		return (0);
	ft_strlcpy (str, &s1[i], j - i + 2);
	return (str);
}
/*
int	main(void)
{
	char	*s1 = "  \t\nHello World!\n\t ";
	char	*set = " \t\n"; // Dodajemy \t 
	i \n do zestawu znaków, które chcemy usunąć

	char	*trimmed = ft_strtrim(s1, set);
	if (trimmed)
	{
		ft_putstr_fd("Trimmed string: ", 1);
		ft_putstr_fd(trimmed, 1);
		ft_putchar_fd('\n', 1);
		free(trimmed); // Zwolnij pamięć po użyciu
	}
	else
		ft_putstr_fd("Error: Failed to trim string\n", 2);

	return (0);
}
*/
