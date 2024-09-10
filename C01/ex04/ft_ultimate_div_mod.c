/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:18:13 by caburges          #+#    #+#             */
/*   Updated: 2024/08/16 10:43:15 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	tempa;
	int	tempb;

	tempa = *a;
	tempb = *b;
	*a = tempa / tempb;
	*b = tempa % tempb;
}

//int	main(void)
//{
//	int mya = 10;
//	int myb = 3;
//
//	int	*a = &mya;
//	int	*b = &myb;
//	printf("mya is %i, myb is %i\n", mya, myb);
//	ft_ultimate_div_mod(a, b);
//	printf("mya divided by myb is %i, the remainder is %i\n", mya, myb);
//}
//
