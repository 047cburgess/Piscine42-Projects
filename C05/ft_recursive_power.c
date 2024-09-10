/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:51:24 by caburges          #+#    #+#             */
/*   Updated: 2024/08/28 23:11:16 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
//
//int	main(void)
//{
//	printf("3 power 4 is 81: %i\n", ft_recursive_power(3, 4));
//	printf("3 power 66 is crazy: %i\n", ft_recursive_power(3, 66));
//	printf("4 power 7: 16384 %i\n", ft_recursive_power(4, 7));
//}
