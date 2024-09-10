/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 11:51:10 by caburges          #+#    #+#             */
/*   Updated: 2024/08/29 09:55:57 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{	
	int	i;
	int	size;

	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}

int	main(int argc, char *argv[])
{
	int	min = atoi(argv[1]);
	int	max = atoi(argv[2]);
	int 	*array;
	
	if (argc != 3)
		return (1);

	ft_ultimate_range(&array, min, max);
	
	if (array != NULL)
	{
		int i = 0;
		while (i < (max - min))
		{
			printf("%i\n", array[i]);
			i++;
		}
	}
	free(array);
}
