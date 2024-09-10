/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 20:15:36 by caburges          #+#    #+#             */
/*   Updated: 2024/08/18 20:30:41 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*p_str;

	p_str = str;
	while (*p_str != '\0')
	{
		if (*p_str >= 65 && *p_str <= 90)
		{
			*p_str = *p_str + 32;
		}
		p_str++;
	}
	return (str);
}
//
//int	main(void)
//{
//	char	string[] = "CASey*&^ WHAT A great Test poooooo";
//
//	printf("%s\n", string);
//	ft_strlowcase(string);
//	printf("%s\n", string);
//}
//
