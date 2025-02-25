/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elara-va <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:21:42 by elara-va          #+#    #+#             */
/*   Updated: 2025/02/25 16:51:25 by elara-va         ###   ########.fr       */
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

	dest = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!dest)
		return (NULL);
	dest_start = dest;
	while (*src)
	{
		*dest_start = *src;
		src++;
		dest_start++;
	}
	return (dest);
}

/*#include <string.h>

int	main()
{
	char *src; 
	
	src = "Hello!   fsd aa_++=  e";
	printf("dest: %s\n", ft_strdup(src));
	printf("dest: %s\n", strdup(src));
	return (0);
}*/
