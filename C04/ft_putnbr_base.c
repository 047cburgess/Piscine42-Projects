/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:29:48 by caburges          #+#    #+#             */
/*   Updated: 2024/08/29 17:23:41 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

int	ft_check_base(char *base, unsigned int base_size)
{
	int	i;
	int	j;

	i = 0;
	if (base_size < 2)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_size;
	unsigned int	i;
	unsigned int	unsigned_nbr;
	char			result[300];

	base_size = ft_strlen(base);
	if (!ft_check_base(base, base_size))
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		unsigned_nbr = -nbr;
	}
	else
		unsigned_nbr = nbr;
	i = 0;
	while (unsigned_nbr > 0)
	{
		result[i] = base[(unsigned_nbr % base_size)];
		unsigned_nbr = unsigned_nbr / base_size;
		i++;
	}
	while (i + 1 > 0)
		write(1, &result[--i], 1);
}

int	main(void)
{
	// Invalid base
	ft_putnbr_base(INT_MIN, "01234567889abcdef");
	write(1, "\n", 1);
	// Invalid base
	ft_putnbr_base(INT_MIN, "");
	write(1, "\n", 1);
	// Valid base
	ft_putnbr_base(INT_MIN, "0123456789abcdef");
	write(1, "\n", 1);
	// Valid base
	ft_putnbr_base(-63765, "0123456789abcdef");
}
