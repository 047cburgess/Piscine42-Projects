/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:13:56 by caburges          #+#    #+#             */
/*   Updated: 2024/08/16 10:22:06 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	buffer;

	buffer = *a;
	*a = *b;
	*b = buffer;
}

//int	main(void)
//{
//	int numbera = 10;
//	int numberb = 20;
//	int *a = &numbera;
//	int *b = &numberb;
//
//	
//	printf("a = %i\n", numbera);
//	printf("b = %i\n", numberb);
//
//	ft_swap(a, b);
//	printf("a = %i\n", numbera);
//	printf("b = %i\n", numberb);
//}
