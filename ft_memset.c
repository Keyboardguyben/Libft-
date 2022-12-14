/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgilliea <bgilliea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:07:53 by bgilliea          #+#    #+#             */
/*   Updated: 2022/11/14 17:17:37 by bgilliea         ###   ########.fr       */
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
