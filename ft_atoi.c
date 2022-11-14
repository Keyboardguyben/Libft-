/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgilliea <bgilliea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:28:38 by bgilliea          #+#    #+#             */
/*   Updated: 2022/10/24 11:23:06 by bgilliea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	to_int(char c, int nb)
{
	int	i;

	nb = nb * 10;
	i = c - 48;
	nb = nb + i;
	return (nb);
}

int	ft_atoi(char *str)
{
	int	number;
	int	i;
	int	sign;

	i = 0;
	number = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	if (str[i] < 48 || str[i] > 57)
		return (0);
	while ((str[i] >= 48 && str[i] <= 57))
	{
		number = to_int(str[i], number);
		i++;
	}
	return (number * sign);
}

/*#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char num[] = "	+000453rr234";
	printf("%d \n",ft_atoi(num));
	printf("%d",atoi(num));
}*/