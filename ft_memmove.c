/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgilliea <bgilliea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:53:14 by bgilliea          #+#    #+#             */
/*   Updated: 2022/10/13 12:09:14 by bgilliea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*lasts;
	char	*lastd;
	char	*d;
	char	*s;

	d = dst;
	s = (char *)src;
	if (!d && !s)
		return (0);
	if (d == s)
		return (dst);
	if (d < s)
		while (len--)
			*d++ = *s++;
	else
	{
		lasts = s + (len - 1);
		lastd = d + (len - 1);
		while (len--)
			*lastd-- = *lasts--;
	}
	return (dst);
}

/*
#include <stdio.h>
#include <string.h>

int main () 
{
    char str[] = "J'achete une huitre";
    char strb[] = "il loue le canard";

    printf("%s \n",ft_memmove(str, strb, 6));
    printf("%s",memmove(str,strb,6));
    

}
*/