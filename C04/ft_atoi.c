/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:33:45 by caburges          #+#    #+#             */
/*   Updated: 2024/08/24 18:21:44 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_space(char c)
{
	if ((c >= 9 && c <= 13) || (c == 32))
		return (1);
	else
		return (0);
}

int	ft_char_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_char_is_sign(char c)
{
	if (c == '-' || c == '+')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	result;
	int	odd_count;

	result = 0;
	odd_count = 0;
	while (ft_is_space(*str))
		str++;
	while (ft_char_is_sign(*str))
	{
		if (*str == '-')
			odd_count++;
		str++;
	}
	while (*str && ft_char_is_numeric(*str))
	{
		result = ((result * 10) + (*str - 48));
		str++;
	}
	if ((odd_count % 2) != 0)
		result = -result;
	return (result);
}

//int	main(void)
//{
//	int	result;
//
//	result = ft_atoi("sdffghfgh-2147483648 ");
//	printf("%i\n", result);
//}
