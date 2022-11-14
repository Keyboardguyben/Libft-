/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgilliea <bgilliea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:04:16 by bgilliea          #+#    #+#             */
/*   Updated: 2022/11/04 16:16:14 by bgilliea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, const void *src, int n)
{
	int			i;
	char		*d;
	const char	*s;

	if (!dst && !src)
		return (0);
	d = dst;
	s = src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
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

	printf("%s \n",ft_memcpy(str, strb, 6));
	printf("%s",memcpy(str,strb,6));
	

}
*/