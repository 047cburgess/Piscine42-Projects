/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:27:04 by caburges          #+#    #+#             */
/*   Updated: 2024/08/29 12:51:40 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 2)
		return (1);
	if (nb % 2 == 0 | nb < 2)
		return (0);
	i = 3;
	while ((i * i <= nb) && (i < 46340))
	{
		if (nb % i == 0)
			return (0);
		i = i + 2;
	}
	return (1);
}	

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}
//
//#include <stdio.h>
//int	main(void)
//{
//	printf("Next prime of 9 is 11: %i\n", ft_find_next_prime(9));
//	printf("Next prime of 13 is 13: %i\n", ft_find_next_prime(13));
//	printf("Next prime of -5 is 2 %i\n", ft_find_next_prime(-5));
//	printf("Next prime of 234 is 239 %i\n", ft_find_next_prime(234));
//}
