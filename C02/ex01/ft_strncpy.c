/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 19:35:17 by caburges          #+#    #+#             */
/*   Updated: 2024/08/18 17:28:39 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
//
//int	main(void)
//{
//	char source[6] = "Casey";
//	printf("The value at the source is: %s\n", source);
//
//	char destination[5] = "Hell";
//	char destinationFT[5] = "Hell";
//	
//	printf("The initial values: %s, %s\n", destination, destinationFT);
//	strncpy(destination, source, 3);
//	ft_strncpy(destinationFT, source, 3);
//
//	
//	printf("The result after copy using strncpy is\n %s\n", destination);
//	printf("The result after copy using myfunction is\n %s\n", destinationFT); 
//}
