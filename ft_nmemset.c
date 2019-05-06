/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nmemset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patrisor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 05:32:56 by patrisor          #+#    #+#             */
/*   Updated: 2019/05/06 15:42:50 by patrisor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** An implementation of memset that does not segfault if b is NULL
** (Returns NULL instead)
*/

#include "includes/libft.h"

void	*ft_nmemset(void *b, int c, size_t len)
{
	unsigned char	*cur;

	cur = b;
	while (len-- && cur)
		*cur++ = (unsigned char)c;
	return (b);
}
