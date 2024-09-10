/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:32:15 by caburges          #+#    #+#             */
/*   Updated: 2024/08/18 19:11:50 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
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
//	char	isempty[] = "";
//	char	isalpha[] = "Casey";
//	char	notalpha[] = "f!";
//
//	ft_str_is_alpha(isalpha);
//	ft_str_is_alpha(notalpha);
//	ft_str_is_alpha(isempty);
//
//
//}
