/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgilliea <bgilliea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:30:48 by bgilliea          #+#    #+#             */
/*   Updated: 2022/11/14 17:16:36 by bgilliea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	y;
	size_t	s2_len;
	char	*s1;

	i = 0;
	s1 = (char *)str1;
	s2_len = ft_strlen(str2);
	if (s2_len == 0 || str1 == str2 || !str2)
		return (s1);
	while (s1[i] != '\0' && i < n)
	{
		y = 0;
		while (s1[i + y] == str2[y] && i + y < n
			&& s1[i + y] != '\0' && str2[y] != '\0' )
		{
			y++;
		}
		if (y == s2_len)
			return (s1 + i);
		i++;
	}
	return (0);
}
