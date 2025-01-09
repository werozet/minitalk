/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzielins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:15:42 by wzielins          #+#    #+#             */
/*   Updated: 2024/03/11 14:10:19 by wzielins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	i;

	dest = (char *) malloc(ft_strlen((char *)s) + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
/*
#include <stdio.h>

int main(void)
{
    const char *originalString = "Hello, World!";
    
    // Using ft_strdup to duplicate the string
    char *duplicateString = ft_strdup(originalString);

    // Check if memory allocation was successful
    if (duplicateString == NULL)
    {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1; // Returning an error code
    }

    // Print the original and duplicated strings
    printf("Original String: %s\n", originalString);
    printf("Duplicated String: %s\n", duplicateString);

    // Free the memory allocated for the duplicated string
    free(duplicateString);

    return 0; // Return 0 to indicate successful execution
}*/
