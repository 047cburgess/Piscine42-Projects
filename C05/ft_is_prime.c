/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:03:13 by caburges          #+#    #+#             */
/*   Updated: 2024/08/28 23:15:18 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 2)
		return (1);
	if (nb % 2 == 0 || nb < 2)
		return (0);
	i = 3;
	while ((i * i <= nb) && (i < 46340))
	{
		if (nb % i == 0)
			return (0);
		else
			i = i + 2;
	}
	return (1);
}
//
//#include <stdio.h>
//int	main(void)
//{
//	printf("235 not prime: 0: %i\n", ft_is_prime(235));
//	printf("1 not prime: 0: %i\n", ft_is_prime(1));
//	printf("-2345 not prime: 0: %i\n", ft_is_prime(-2345));
//	printf("2 is prime: 1: %i\n", ft_is_prime(2));
//	printf("6254 not prime: 0: %i\n", ft_is_prime(6254));
//	printf("23 is prime: 1: %i\n", ft_is_prime(23));
//	printf("int max is prime: 1: %i\n", ft_is_prime(2147483647));
//}
