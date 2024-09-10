/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 15:20:56 by caburges          #+#    #+#             */
/*   Updated: 2024/08/20 10:39:17 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (i < size - 1)
		{
			dest[i] = src[i];
		}
		i++;
	}
	if (size > 0)
	{
		dest[i] = '\0';
	}
	return (i);
}
//
//int	main(void)
//{
//	char source[6] = "Casey";
//	char destination[9] = "01234567";
//		
//	printf("To start with the destination value: %s\n", destination);
//	printf("digits in source is : %i\n", ft_strlcpy(destination, source, 9));
//	printf("After copy, destination value: %s\n", destination);
//
//}	
