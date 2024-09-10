/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:08:57 by caburges          #+#    #+#             */
/*   Updated: 2024/08/29 12:44:24 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
//
//int	main(void)
//{
//	printf("2 ^ 3 = 8: %i\n", ft_iterative_power(2, 3));
//	printf("4 ^ 8 = 65536: %i\n", ft_iterative_power(4, 8));
//	printf("0 ^ 0 = 1: %i\n", ft_iterative_power(0, 0));
//	printf("5 ^ 0 = 1: %i\n", ft_iterative_power(5, 0));
//}	
