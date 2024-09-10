/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:52:16 by caburges          #+#    #+#             */
/*   Updated: 2024/08/28 23:06:19 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
//
//#include <stdio.h>
//int	main(void)
//{
//	printf("Fact 5: 120 %i\n", ft_recursive_factorial(5));
//	printf("Fact -5: not valid: 0 %i\n", ft_recursive_factorial(-5));
//	printf("Fact 0: 1: %i\n", ft_recursive_factorial(0));
//	printf("Fact 10: 3628800 %i\n", ft_recursive_factorial(10));
//}
