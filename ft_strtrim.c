/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybollen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:12:21 by ybollen           #+#    #+#             */
/*   Updated: 2024/03/06 13:12:23 by ybollen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_find_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

size_t	find_start(char const *s1, char const *set)
{
	size_t	start;

	start = 0;
	while (s1[start])
	{
		if (ft_find_set(s1[start], set))
			start++;
		else
			return (start);
	}
	return (start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;

	start = find_start(s1, set);
	end = ft_strlen((char *)s1);
	while (end > start)
	{
		if (ft_find_set(s1[end - 1], set))
			end--;
		else
			break ;
	}
	str = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, s1 + start, end - start);
	str[end - start] = '\0';
	return (str);
}
/*
int main(void)
{
	const char *s1 = "   Koda Luna Obi   ";
	const char *set = " ";
	char *trimmed_str = ft_strtrim(s1, set);
	if (trimmed_str != NULL)
	{
		printf("Original string: \"%s\"\n", s1);
		printf("Trimmed string: \"%s\"\n", trimmed_str);
		free(trimmed_str);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return 0;
}*/
