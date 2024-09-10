/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubblesort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 11:50:33 by caburges          #+#    #+#             */
/*   Updated: 2024/08/23 13:11:10 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	buffer;

	buffer = *a;
	*a = *b;
	*b = buffer;
}

void	sort_array_int(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < (size - 1 - i ))
		{
			if (tab[j] > tab[j + 1])
			{
				ft_swap(&tab[j], &tab[j + 1]);
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	int	tab[16] = {1, 7, 3, 5, 6, 3, 0, 6, 4, 8, 2, 7, 6, 4, 3};
	
	sort_array_int(tab, 16);
	int i = 0;
	while (i < 16)
	{
		printf("%i", tab[i]);
		i++;
	}
}
