/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:24:41 by caburges          #+#    #+#             */
/*   Updated: 2024/08/29 19:37:05 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int     ft_is_space(char c)
{
        if ((c >= 9 && c <= 13) || (c == 32))
                return (1);
        else
                return (0);
}

int     ft_char_is_sign(char c)
{
        if (c == '-' || c == '+')
                return (1);
        else
                return (0);
}

int	ft_pow(int nb, int power)
{
	if(power == 0)
		return (1);
	return (nb * ft_pow(nb, power-1));
}

int	ft_check_base(char *base, unsigned int base_size)
{
	int	i;
	int	j;

	i = 0;
	if (base_size < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	in_base(char c, char *base)
{
	int	j;

	j = 0;
	while (base[j])
	{
		if (base[j] == c)
		       return (1);
		j++;
	}
	return (0);
}	

int	get_place_in_base(char c, char *base)
{
	int i;

	while (base[i] && base[i] != c)
		i++;
	return i;
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	odd_count;
	int	base_size;
	int	i;
	int	len;
	
	base_size = 0;
	while (base[base_size])
		base_size++;
	if (!ft_check_base(base, base_size))
		return (0);
	odd_count = 0;
        i = 0;
	while (ft_is_space(str[i]))
                i++;
        while (ft_char_is_sign(str[i]))
        {
                if (str[i] == '-')
                        odd_count++;
                i++;
        }
	len = i;
        while (str[len] && in_base(str[len], base))
		len++;
	result = 0;
	// && character is in the base
        while (str[i] && in_base(str[i], base)) // character is part of the base)
        {
        	result = result + get_place_in_base(str[i], base) * ft_pow(base_size, len - i - 1);
                i++;
        }
        if ((odd_count % 2) != 0)
                result = -result;
        return (result);

}

//bababa base "ab" -> 42 base "0123456789"
//1 * 2^5 + 0 * 2^4 + 1 * 2^3 + 0 * 2^2 + 1 * 2^1 + 0 * 2^0 = 32 + 0 + 8 + 0 + 2 + 0 = 32 + 8 + 2 = 42

int	main(int argc, char *argv[])
{
	if (argc != 3)
		return (1);
	printf("%i\n", ft_atoi_base(argv[1], argv[2]));	
}
