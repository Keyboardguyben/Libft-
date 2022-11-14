/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgilliea <bgilliea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 10:35:56 by bgilliea          #+#    #+#             */
/*   Updated: 2022/11/14 16:54:26 by bgilliea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	char	*s1b;
	char	*s2b;

	s1b = (char *)s1;
	s2b = (char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (s1b[i] != '\0' && s2b[i] != '\0' && s1b[i] == s2b[i] && i < n - 1)
	{
		i++;
	}
	return ((unsigned char)s1b[i] - (unsigned char)s2b[i]);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[] = "bobobo ba bo-bobo";
	char str2[] = "bobobo bo bo-bobo";
	printf("%d \n",ft_strncmp(str1, str2,20));
	printf("%d",strncmp(str1, str2,20));
}*/
