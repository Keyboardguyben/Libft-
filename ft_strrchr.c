/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgilliea <bgilliea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:13:03 by bgilliea          #+#    #+#             */
/*   Updated: 2022/11/14 12:44:14 by bgilliea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//retourne derniere occurence du caractere
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

/*#include <string.h>
#include <stdio.h>

int main()
{
	printf("%s \n",ft_strrchr("Une grosse palourde",'o'));
	printf("%s",strrchr("Une grosse palourde",'o'));
}*/