/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 12:45:49 by caburges          #+#    #+#             */
/*   Updated: 2024/08/16 14:11:42 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

//void	ft_putstr(char	*str)
//{
//	int	i;
//
//	i = 0;
//	while (str[i] != '\0')
//	{
//		write(1, &str[i], 1);
//		i++;
//	}
//}
//
int	ft_strlen(char	*str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
//
//int	main(void)
//{
//	char	*myname;
//	int	length;
//
//	myname = "Casey";
//	ft_putstr(myname);
//	length = ft_strlen(myname);
//	printf("length of my name is %i", length);	
//}
