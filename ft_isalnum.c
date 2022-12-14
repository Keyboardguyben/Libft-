/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgilliea <bgilliea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:36:16 by bgilliea          #+#    #+#             */
/*   Updated: 2022/10/13 12:23:30 by bgilliea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(char str)
{
	int	alnum;

	alnum = 0;
	if ((str >= '0' && str <= '9') || ((str >= 'A' && str <= 'Z' )
			|| (str >= 'a' && str <= 'z' )))
	{
		alnum = 1;
	}
	return (alnum);
}
