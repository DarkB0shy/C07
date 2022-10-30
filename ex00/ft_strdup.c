/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:17:28 by dcarassi          #+#    #+#             */
/*   Updated: 2022/10/30 13:04:09 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *src)
{
	int	c;

	c = 0;
	while (src[c])
		c++;
	return (c);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int	i;

	i = 0;
	str = malloc((ft_strlen(src) - 1) * sizeof(char));
	if (!str)
		return (0);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}
