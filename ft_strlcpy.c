/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgilliea <bgilliea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:24:18 by bgilliea          #+#    #+#             */
/*   Updated: 2022/11/14 10:08:31 by bgilliea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}

/* #include <stdio.h>
#include <string.h>

int main () 
{
    // char str[] = "J'achete une huitre";
    // char strb[] = "il loue le canard";
	char *dest = "";

    printf("%lu \n",ft_strlcpy(dest, "aaa", 3));
    printf("%lu",strlcpy(dest, "aaa", 3)); 
 } */