/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patrisor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 14:24:12 by patrisor          #+#    #+#             */
/*   Updated: 2019/03/13 14:07:07 by patrisor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, char const *src, size_t size)
{
	char	*pdst;
	size_t	lensrc;
	size_t	lendst;

	pdst = dst;
	lensrc = ft_strlen(src);
	lendst = ft_strlen(dst);
	if (lendst >= size)
		return (lensrc + size);
	pdst += lendst;
	while (*src && size-- > 1 + lendst)
		*pdst++ = *src++;
	*pdst = '\0';
	return (lensrc + lendst);
}
