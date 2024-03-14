/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybollen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:40:43 by ybollen           #+#    #+#             */
/*   Updated: 2024/03/06 11:40:45 by ybollen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*arr;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	arr = (void *)malloc(count * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	ft_bzero(arr, count * size);
	return (arr);
}
/*
int main(void)
{
    char *test;

	test = ft_calloc(10, sizeof(char));
	return (0);
}*/