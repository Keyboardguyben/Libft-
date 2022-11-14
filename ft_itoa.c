/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgilliea <bgilliea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 10:15:25 by bgilliea          #+#    #+#             */
/*   Updated: 2022/11/08 11:23:04 by bgilliea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getsize(long nb)
{
	int	neg;
	int	i;

	neg = 0;
	i = 0;
	if (nb < 0)
	{
		neg = 1;
		i++;
		nb = -nb;
	}
	while (nb >= 1)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

static char	*ft_fillstring(int nb, char *ret, int neg, int len)
{
	if (nb < 0)
	{
		neg = 1;
		nb = -nb;
	}
	ret[len] = '\0';
	while (--len)
	{
		ret[len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	if (neg == 1)
		ret[0] = '-';
	else
		ret[0] = (nb % 10) + '0';
	return (ret);
}

char	*ft_itoa(int n)
{
	char	*ret;
	int		len;
	int		neg;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_getsize(n);
	neg = 0;
	if (n != 0)
	{
		ret = malloc(sizeof(char) * (len + 1));
		if (!ret)
			return (NULL);
		ret = ft_fillstring(n, ret, neg, len);
		return (ret);
	}
	else if (n == 0)
	{
		ret = ft_strdup("0");
		return (ret);
	}
	return (NULL);
}

/*
#include <stdio.h>

int main(void)
{
	int n = 23442;

	printf("%s",ft_itoa(n));
}
*/
