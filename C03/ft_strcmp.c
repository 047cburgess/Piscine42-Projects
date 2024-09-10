/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:50:58 by caburges          #+#    #+#             */
/*   Updated: 2024/08/21 21:15:18 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{	
		if (*s1 != *s2)
		{	
			return (*s1 - *s2);
		}
			s1++;
			s2++;
	}
	return (*(s1) - *(s2));
}
//
//int	main(void)
//{
//
//	char string1a[] = "Hrlo";
//	char string1b[] = "H5llo";
//	printf("r - 5: 61: : %i/n", ft_strcmp(string1a, string1b));
//}
