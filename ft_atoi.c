/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybollen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:35:21 by ybollen           #+#    #+#             */
/*   Updated: 2024/03/06 11:36:13 by ybollen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sign);
}
/*
int	main()
{
    char str1[] = "---+--+1234ab567";
    char str2[] = "   -456  ";
    char str3[] = "789";

    printf("%s: %d\n", str1, ft_atoi(str1));
    printf("%s: %d\n", str2, ft_atoi(str2));
    printf("%s: %d\n", str3, ft_atoi(str3));

    return 0;
}*/
