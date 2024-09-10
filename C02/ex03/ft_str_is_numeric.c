/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:34:13 by caburges          #+#    #+#             */
/*   Updated: 2024/08/18 19:11:28 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
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
//	char	is_numeric[] = "123456";
//	char	not_numeric[] = "1abcdefg";
//	char	is_empty[] = "";
//
//	ft_str_is_numeric(is_numeric);
//	ft_str_is_numeric(not_numeric);
//	ft_str_is_numeric(is_empty);
//}
