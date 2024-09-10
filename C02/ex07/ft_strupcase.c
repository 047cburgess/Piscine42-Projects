/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 19:44:18 by caburges          #+#    #+#             */
/*   Updated: 2024/08/18 20:12:40 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*p_str;

	p_str = str;
	while (*p_str != '\0')
	{
		if (*p_str >= 'a' && *p_str <= 'z')
		{
			*p_str = *p_str - 32;
		}
		p_str++;
	}
	return (str);
}	
//
//int	main(void)
//{
//	char string[] = "123What a propertest!0+";
//	printf("%s\n", string);
//	ft_strupcase(string);
//	printf("%s\n", string);
//}
