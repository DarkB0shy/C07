/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:53:19 by dcarassi          #+#    #+#             */
/*   Updated: 2022/11/01 17:12:48 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	limit;
	int	index;
	int	*buffa;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	limit = max - min;
	buffa = malloc(limit * sizeof(int));
	if (!vector)
	{
		*range = 0;
		return (-1);
	}
	*range = buffa;
	index = 0;
	while (index < limit)
	{
		buffa[index] = min + index;
		index++;
	}
	return (limit);
}
