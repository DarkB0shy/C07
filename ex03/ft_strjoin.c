/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:22:55 by dcarassi          #+#    #+#             */
/*   Updated: 2022/11/02 09:23:25 by dcarassi         ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;
	char	*buffa;

	i = 0;
	str = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	buffa = str;
	if (!buffa)
		return (0);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*tocopy;
	char	*ret;
	int		f_length;

	f_length = get_f_length(strs, sep, size);
	tocopy = (char *) malloc (f_length * sizeof(char));
	ret = (char *) malloc (f_length * sizeof(char));
	if (size == 0)
		return (ret);
	i = 0;
	while (i < size)
	{
		tocopy = ft_strdup(strs[i]);
		ret = ft_strcat(ret, tocopy);
		if (i < size - 1)
		{
			tocopy = ft_strdup(sep);
			ret = ft_strcat(ret, tocopy);
		}
		i++;
	}
	return (ret);
}
