/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:22:55 by dcarassi          #+#    #+#             */
/*   Updated: 2022/11/02 10:18:54 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	c;
	int	i;

	i = 0;
	c = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[c] = src[i];
		c++;
		i++;
	}
	dest[c] = 0;
	return (dest);
}

int	get_f_length(char **strs, char *sep, int size)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (i < size)
	{
		count = count + ft_strlen(strs[i]);
		i++;
	}
	i = 0;
	while (i < size - 1)
	{
		count = count + ft_strlen(sep);
		i++;
	}
	return (count);
}

char	*ft_strdup(char *src)
{
	int		index;
	char	*dest;
	char	*buffa;

	index = 0;
	dest = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	buffa = dest;
	if (!buffa)
		return (0);
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*ret;
	int		f_length;

	f_length = get_f_length(strs, sep, size);
	ret = (char *) malloc (f_length * sizeof(char));
	if (size == 0)
		return (ret);
	i = 0;
	while (i < size)
	{
		ret = ft_strcat(ret, ft_strdup(strs[i]));
		if (i < size - 1)
		{
			ret = ft_strcat(ret, ft_strdup(sep));
		}
		i++;
	}
	return (ret);
}
