/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:58:54 by caburges          #+#    #+#             */
/*   Updated: 2024/08/28 11:50:41 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;
	int	size;

	if (min >= max)
		return (NULL);
	size = max - min;
	array = malloc(sizeof(int) * size);
	if (!array)
		return (NULL);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}	
	return (array);
}
//
//#include <stdio.h>
//
//int	main(int argc, char **argv)
//{
//	int *array;
//	int	i;
//	if (argc != 3)
//		return (1);
//       	array = ft_range(atoi(argv[1]), atoi(argv[2]));
//
//	i = 0;
//	while (i < atoi(argv[2]) - atoi(argv[1]))
//	{
//		printf("%i\n", array[i]);
//		i++;
//	}
//
//	free(array);
//}
