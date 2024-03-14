/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybollen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:37:44 by ybollen           #+#    #+#             */
/*   Updated: 2024/03/06 11:37:47 by ybollen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count_src;

	i = 0;
	count_src = 0;
	while (src[count_src])
		count_src++;
	if (size < 1)
		return (count_src);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count_src);
}
/*
int main(void)
{
	char src[] = "Hello, World!";
	char dest[20];
	unsigned int size = 10;

	ft_strlcpy(dest, src, size);
	printf("Copied String: %s\n", dest);

    return (0);
}*/
