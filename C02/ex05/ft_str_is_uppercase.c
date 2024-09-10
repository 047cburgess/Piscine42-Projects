/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 19:00:41 by caburges          #+#    #+#             */
/*   Updated: 2024/08/18 19:10:24 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
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
//	char	is_upper[] = "TESTING";
//	char	not_upper[] = "TesTing";
//	char	empty[] = "";
//
//	ft_str_is_uppercase(is_upper);
//	ft_str_is_uppercase(not_upper);
//	ft_str_is_uppercase(empty);
//}
