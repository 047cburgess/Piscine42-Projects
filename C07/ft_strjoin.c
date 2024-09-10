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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		j;
	int		k;
	int		l;

	dest = malloc(sizeof(char) * (ft_strssize(strs, size)
				+ (ft_strlen(sep) * (size - 1)) + 1));
	if (!dest)
		return (NULL);
	i = 0;
	j = 0;
	while (i < size)
	{
		k = 0;
		while (strs[i][k] != '\0')
			dest[j++] = strs[i][k++];
		l = 0;
		if (i == size - 1)
			dest[j] = '\0';
		else
			while (sep[l])
				dest[j++] = sep[l++];
		i++;
	}
	return (dest);
}

int	main(void)
{
	char *strings[] = { "this", "exercise", "", "killed", "mee" };
	char *destination = ft_strjoin(5, strings, "_");

	printf("%s\n", destination);

	free(destination);
}
