/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elara-va <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:52:25 by elara-va          #+#    #+#             */
/*   Updated: 2025/02/25 20:46:51 by elara-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	add_lengths(char **strs, char *sep, int size)
{
	int	i;
	int	char_amount;

	i = 0;
	char_amount = 0;
	while (i < size)
	{
		char_amount += ft_strlen(strs[i]);
		i++;
	}
	char_amount += ft_strlen(sep) * i - 1;
	return (char_amount);
}

char	*ft_strcat(char **strs, char *sep, int size)
{
	int		i;
	int		j;
	int		k;
	int		l;
	char	*resulting_str;

	resulting_str = malloc(add_lengths(strs, sep, size) + 1);
	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (strs[i])
	{
		while (strs[i][j])
		{
			resulting_str[k] = strs[i][j];
			j++;
			k++;
		}
		if (strs[i + 1])
		{
			while (sep[l])
			{
				resulting_str[k] = sep[l];
				l++;
				k++;
			}
			l = 0;
			j = 0;
			i++;
		}
	}
	resulting_str[k] = '\0';
	return (resulting_str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*empty_str;

	if (size == 0)
	{
		empty_str = malloc(1);
		if (!empty_str)
			return (NULL);
		*empty_str = '\0';
		return (empty_str);
	}
	return (ft_strcat(strs, sep, size));
}

#include <stdio.h>

int	main()
{
	int size = 3;
	char *strs[] = {"Hello", "my", "world"};
	char *sep = "->";
	char *res = ft_strjoin(size, strs, sep);

	printf("%s\n", res);
	return (0);
}
