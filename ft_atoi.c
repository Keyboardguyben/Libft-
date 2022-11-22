/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgilliea <bgilliea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:28:38 by bgilliea          #+#    #+#             */
/*   Updated: 2022/11/21 11:43:05 by bgilliea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	to_int(char c, long nb)
{
	int	i;

	nb = nb * 10;
	i = c - 48;
	nb = nb + i;
	return (nb);
}

int	ft_atoi(const char *str)
{
	long				number;
	int					i;
	int					sign;
	unsigned long long	save;

	i = 0;
	number = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign *= -1;
	}
	if (str[i] < 48 || str[i] > 57)
		return (0);
	while ((str[i] >= 48 && str[i] <= 57))
	{	
		number = to_int(str[i++], number);
		save = number;
		if (save > 9223372036854775807)
			return (-1 * (sign > 0));
	}
	return (number * sign);
}

/*#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char num[] = "922337203685755558072";
	printf("%d \n",ft_atoi(num));
	printf("%d",atoi(num));
}*/