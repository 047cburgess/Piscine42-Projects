/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:23:52 by caburges          #+#    #+#             */
/*   Updated: 2024/08/29 20:40:15 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strssize(char **strs, int size)
{
	int	i;
	int	strlen_strs;

	i = 0;
	strlen_strs = 0;
	while (i < size)
	{
		strlen_strs = strlen_strs + ft_strlen(strs[i]);
		i++;
	}
	return (strlen_strs);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	destlen;

	i = 0;
	destlen = ft_strlen(dest);
	while (src[i])
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;

	if (size <= 0)
	{
		dest = malloc(sizeof(char) * 1);
		if (!dest)
			return NULL;
		dest[0] = '\0';
		return (dest);
	}
	dest = malloc(sizeof(char) * ((ft_strssize(strs, size)
				+ (ft_strlen(sep) * (size - 1)) + 1)));
	if (!dest)
		return (NULL);
	i = 0;
	dest[0] = '\0';
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i != size - 1)
			ft_strcat(dest, sep);
		i++;
	}
	return (dest);
}

int	main(void)
{
	char *strings[] = { "this", "exercise", "nearly", "killed", "mee" };
	char *destination = ft_strjoin(5, strings, "_");

	if (destination)
		printf("%s\n", destination);
	free(destination);
}
