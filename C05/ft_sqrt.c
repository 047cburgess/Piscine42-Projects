/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:25:21 by caburges          #+#    #+#             */
/*   Updated: 2024/08/29 12:39:17 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while ((i * i <= nb) && (i <= 46340))
	{
		if (i * i == nb)
			return (i);
		else
			i++;
	}
	return (0);
}	
//
//#include <stdio.h>
//int	main(void)
//{
//	printf("sqrt 9 is 3: %i\n", ft_sqrt(9));
//	printf("sqrt -9 is not validm return 0: %i\n", ft_sqrt(-9));
//	printf("sqrt 125 is decimal, return 0: %i\n", ft_sqrt(125));
//	printf("sqrt 625 is 25: %i\n", ft_sqrt(625));
//	printf("sqrt 2147395600 is 46340: %i\n", ft_sqrt(2147395600));
//}
