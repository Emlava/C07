/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elara-va <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 13:02:04 by elara-va          #+#    #+#             */
/*   Updated: 2025/02/24 16:43:56 by elara-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	n;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	n = min;
	while (i < max - min)
	{
		(*range)[i] = n;
		i++;
		n++;
	}
	return (max - min);
}

/*#include <stdio.h>

int	main()
{
	int min = 5;
	int max = 12;
	int *range = NULL;

	printf("Size of range = %d\n", ft_ultimate_range(&range, min, max));
	return (0);
}*/
