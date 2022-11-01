/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:17:28 by dcarassi          #+#    #+#             */
/*   Updated: 2022/11/01 20:59:19 by dcarassi         ###   ########.fr       */
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
	char	*d;
	int		i;

	i = 0;
	str = (char *)malloc((ft_strlen(src)) * sizeof(char + 1));
	d = str;
	if (!d)
		return (0);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
