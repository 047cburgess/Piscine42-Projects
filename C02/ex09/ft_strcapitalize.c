/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 20:33:26 by caburges          #+#    #+#             */
/*   Updated: 2024/08/19 21:29:57 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_alphanumeric(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

char	ft_char_capitalize(char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

char	ft_char_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	char	*p_char;

	p_char = str;
	*p_char = ft_char_capitalize(*p_char);
	p_char++;
	while (*p_char != '\0')
	{
		if (!(ft_is_alphanumeric(*(p_char - 1))))
		{
			*p_char = ft_char_capitalize(*p_char);
		}
		else
		{
			*p_char = ft_char_tolower(*p_char);
		}
		p_char++;
	}
	return (str);
}
//
//int	main(void)
//{
//	char string[] = "-ReKt17+LOl";
//	
//	printf("%s\n", string);
//
//	ft_strcapitalize(string);
//
//	printf("%s\n", string);
//}
