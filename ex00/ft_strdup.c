/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elara-va <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:21:42 by elara-va          #+#    #+#             */
/*   Updated: 2025/02/23 19:03:33 by elara-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	char	*dest_start;

	dest = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	dest_start = dest;
	while (*src)
	{
		*dest_start = *src;
		src++;
		dest_start++;
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int	main()
{
	char *src; 
	
	src = "Hello!   fsd aa_++=  e";
	printf("dest: %s\n", ft_strdup(src));
	printf("dest: %s\n", strdup(src));
	return (0);
}*/
