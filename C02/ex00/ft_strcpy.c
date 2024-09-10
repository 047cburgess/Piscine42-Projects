/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 18:29:04 by caburges          #+#    #+#             */
/*   Updated: 2024/08/18 14:54:26 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

//int	main(void)
//{
//	// Declared a string myname and initialised to Heather
//	char myname[] = "Hdfgdfgdfgdfgeather";
//	
//	char copymyname[8];
//		
//	ft_strcpy(copymyname, myname);
//
//	//Print out the copy made to check if it worked
//	printf("%s", copymyname);
//}
