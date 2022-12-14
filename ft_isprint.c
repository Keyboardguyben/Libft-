/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgilliea <bgilliea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:13:39 by bgilliea          #+#    #+#             */
/*   Updated: 2022/11/17 13:37:32 by bgilliea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	int	print;

	print = 0;
	if (c >= 32 && c <= 126)
	{
		print = 1;
	}
	return (print);
}
