/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:46:57 by caburges          #+#    #+#             */
/*   Updated: 2024/08/18 19:10:59 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
//
//int	main(void)
//{
//	char is_lower[] = "abdgef";
//	char not_lower[] = "fsdfTTT";
//	char not_lower2[] = "sdf88JJS";
//	char is_empty[] = "";
//
//	ft_str_is_lowercase(is_lower);
//	ft_str_is_lowercase(not_lower);
//	ft_str_is_lowercase(not_lower2);
//	ft_str_is_lowercase(is_empty);
//}
