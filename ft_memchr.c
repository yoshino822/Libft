/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybollen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:38:57 by ybollen           #+#    #+#             */
/*   Updated: 2024/03/06 11:39:00 by ybollen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *list, int c, size_t size)
{
	char	*str;
	size_t	i;

	str = (char *)list;
	i = 0;
	while (i < size)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
		{
			return ((char *)list + i);
		}
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
	const char str[] = "Koda+Luna+Obi";
	const char ch = '+';

	printf("String after \'%c\' is: %s\n", ch, ft_memchr(str, ch, 5));

	return(0);
}*/
