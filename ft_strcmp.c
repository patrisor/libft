/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patrisor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 15:18:10 by patrisor          #+#    #+#             */
/*   Updated: 2019/03/09 16:49:07 by patrisor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int		i;

	i = 0;
	while (*(s1 + i) && *(s1 + i) == *(s2 + i))
		i++;
	return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
}
