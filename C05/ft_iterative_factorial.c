/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:12:25 by caburges          #+#    #+#             */
/*   Updated: 2024/08/27 12:22:45 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <limits.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	i = 1;
	while (i <= nb)
	{
		result = result * i;
		i++;
	}
	return (result);
}
//
//int	main(void)
//{
//	printf("5! is 120: %i\n", ft_iterative_factorial(5));
//	printf("0! is 1: %i\n", ft_iterative_factorial(0));
//	printf("8! is 40,320: %i\n", ft_iterative_factorial(8));
//}
//	
