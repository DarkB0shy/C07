/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:13:19 by dcarassi          #+#    #+#             */
/*   Updated: 2022/11/01 15:09:35 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	get_w_length(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
}

int	get_f_length(char **strings, int size, int l_sep)
{
	int	i;
	int	f_length;

	i = 0;
	f_length = 0;
	while (i < size)
	{
		f_length = f_length + get_w_length(strings[i]);
		f_length = f_length + l_sep;
		i++;
	}
	f_length = f_length - l_sep;
	return (f_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	f_length;
	char	*string;
	char	*d;

	if (size == 0)
		return ((char *)malloc(size * sizeof(char)));
	f_length = get_f_length(strs, size, get_w_length(sep));
	d = (string = (char *)malloc((f_length + 1)* sizeof(char)));
	if (!d)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcpy(d, strs[i]);
		d = d + get_w_length(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(d, sep);
			d = d + get_w_length(sep);
		}
		i++;
	}
	return (string);
}

int	main (void)
{
	char	**strs;
	char	*sepo;
	char	*result;
	int	size;

	size = 3;
	strs = (char **)malloc(size * sizeof(char *));
	strs[0] = (char *)malloc(6 * sizeof(char));
	strs[1] = (char *)malloc(6 * sizeof(char));
	strs[2] = (char *)malloc(7 * sizeof(char));
	sepo = "Burp";
	strs[0] = "Wubba";
	strs[1] = "lubba";
	strs[2] = "dubdub";
	result = ft_strjoin(size, strs, sepo);
	printf("%s", result);
	free(result);
	return (0);
}
