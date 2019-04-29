/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patrisor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 22:20:14 by patrisor          #+#    #+#             */
/*   Updated: 2019/04/17 23:08:29 by patrisor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int			ft_pow(int x, int y)
{
	int		result;

	if (x < 0)
		x *= -1;
	if (y == 0)
		return (1);
	if ((y < 0) || (x == 0))
		return (0);
	result = 1;
	while (y--)
		result *= x;
	return (result);
}
