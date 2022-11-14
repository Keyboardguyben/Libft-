/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgilliea <bgilliea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:07:53 by bgilliea          #+#    #+#             */
/*   Updated: 2022/11/08 11:35:14 by bgilliea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *str, int c, int n)
{
	int		i;
	char	*strb;

	strb = str;
	i = 0;
	while (i < n)
	{
		strb[i] = c;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
#include <string.h>

int main () 
{
	char str[] = "J'achete une huitre";
	char strb[] = "J'achete une huitre";

	printf("%s \n",memset(str,'b',6));
	printf("%s",ft_memset(str,'b',6));
	

}
*/