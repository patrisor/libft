/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patrisor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 19:44:46 by patrisor          #+#    #+#             */
/*   Updated: 2019/03/13 14:08:41 by patrisor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t		i;

	i = -1;
	while (++i < n)
		if (*(src + i))
			*(dst + i) = *(src + i);
		else
			while (i < n)
				*(dst + i++) = '\0';
	return (dst);
}
