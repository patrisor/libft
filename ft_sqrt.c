/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patrisor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 22:19:18 by patrisor          #+#    #+#             */
/*   Updated: 2019/05/06 15:43:45 by patrisor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

double			ft_sqrt(double x)
{
	double racine;
	double sqrt;

	racine = 1;
	sqrt = 0;
	while (racine <= x / 2)
	{
		sqrt = racine * racine;
		if (sqrt == x)
			return (racine);
		racine++;
	}
	return (0);
}
