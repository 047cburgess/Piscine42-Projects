/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:12:23 by caburges          #+#    #+#             */
/*   Updated: 2024/08/22 14:08:02 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	size_find;
	unsigned int	j;

	j = 0;
	size_find = 0;
	if (*to_find == '\0')
	{
		return (str);
	}
	while (to_find[size_find])
	{
		size_find++;
	}
	while (str[j])
	{
		if (!ft_strncmp(&str[j], to_find, size_find))
		{
			return (&str[j]);
		}
		else
			j++;
	}
	return (0);
}
//
//int	main(void)
//{
//	char mainstring[] = "Hello Wor WorlddijkWorldy";
//	char tofind[] = "World";
//	char *p;
//	p = ft_strstr(mainstring, tofind);
//	printf("'%s'\n", p);
//}
