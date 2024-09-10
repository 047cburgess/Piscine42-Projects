/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:57:13 by caburges          #+#    #+#             */
/*   Updated: 2024/08/28 10:58:12 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 
//#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strdup(char *src)
{
	char	*copy_source;
	int		i;

	copy_source = malloc((sizeof(char) * ft_strlen(src)) + 1);
	if (!copy_source)
		return (NULL);
	i = 0;
	while (src[i])
	{
		copy_source[i] = src[i];
		i++;
	}
	copy_source[i] = '\0';
	return (copy_source);
}
//
//int	main(void)
//{
//	char source[] = "Casey";
//	char *copy = ft_strdup(source);
//
//	int i = 0;
//	while (copy[i])
//	{
//		write(1, &copy[i], 1);
//		i++;
//	}
//
//	free(copy);
//}
