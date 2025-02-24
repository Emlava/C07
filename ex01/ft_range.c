/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elara-va <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:00:55 by elara-va          #+#    #+#             */
/*   Updated: 2025/02/24 12:38:00 by elara-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	n;

	if (min >= max)
		return (NULL);
	range = (int *)malloc((max - min) * sizeof(int));
	i = 0;
	n = min;
	while (i < max - min)
	{
		range[i] = n;
		i++;
		n++;
	}
	return (range);
}

/*#include <stdio.h>

int	main()
{
	int min = 5;
	int max = 10;
	int i = 0;
	int *range = ft_range(min, max);

	printf("%d to %d includes:\n", min, max);

	while (i < max - min)
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}*/
