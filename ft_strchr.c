/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybollen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:01:27 by ybollen           #+#    #+#             */
/*   Updated: 2024/03/06 13:01:29 by ybollen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
		{
			return ((char *)str);
		}
		str++;
	}
	if (c == '\0')
	{
		return ((char *)str);
	}
	return (0);
}
/*
int main(void)
{
	const char str[] = "Koda+Luna+Obi";
	const char ch = '+';

	printf("String after \'%c\' is: %s\n", ch, ft_strchr(str, ch));

	return(0);
}*/
