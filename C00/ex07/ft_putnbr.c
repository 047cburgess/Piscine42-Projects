/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:35:02 by caburges          #+#    #+#             */
/*   Updated: 2024/08/15 13:45:35 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	// BASECASE
//	ft_putchar(nb + '0');
	
	if (nb <= 9)
	{
		ft_putchar(n + '0');
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11)
	}






	// has to accept range of  -2147483648 to 2147483647
	// max length of int including minus is 11. 1 -> 11
	// take the number, translate each one to a character
	//
	// should print out the minus sign
	//
}

int	main(void)
{
	//ft_putnbr(-2147483648);
	//ft_putchar('\n')
	//ft_putnbr(2147483647);
	//ft_putchar('\n')
	ft_putnbr(5);
}
