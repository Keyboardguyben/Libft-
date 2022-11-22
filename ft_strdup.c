/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgilliea <bgilliea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:13:12 by bgilliea          #+#    #+#             */
/*   Updated: 2022/11/14 17:17:14 by bgilliea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	l;
	char	*dst;

	l = ft_strlen(src)+1;
	dst = malloc(l);
	if (dst == 0)
		return (0);
	ft_strlcpy(dst, src, l);
	return (dst);
}
