/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgilliea <bgilliea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:16:48 by bgilliea          #+#    #+#             */
/*   Updated: 2022/11/07 13:08:06 by bgilliea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nb, size_t size )
{
	void	*rtn;

	rtn = malloc(size * nb);
	if (!rtn)
		return (rtn);
	ft_bzero(rtn, nb * size);
	return (rtn);
}
