/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgilliea <bgilliea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:41:52 by bgilliea          #+#    #+#             */
/*   Updated: 2022/11/18 14:08:29 by bgilliea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	y;
	char	*ret;

	if (!s1 || !s2)
		return (NULL);
	ret = (char *)malloc (sizeof (*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ret)
		return (NULL);
	i = 0;
	y = 0;
	while (s1[i])
	{
		ret[y++] = s1[i++];
	}
	i = 0;
	while (s2[i])
	{
		ret[y++] = s2[i++];
	}
	ret[y] = 0;
	return (ret);
}
