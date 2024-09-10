/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 19:15:33 by caburges          #+#    #+#             */
/*   Updated: 2024/08/18 19:28:34 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 32 && *str <= 126))
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
//	char is_printable[] = "4fs=)*(";
//	char not_printable[] = "5464\n";
//
//	ft_str_is_printable(is_printable);
//	ft_str_is_printable(not_printable);
//}
