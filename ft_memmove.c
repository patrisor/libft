/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patrisor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 21:35:58 by patrisor          #+#    #+#             */
/*   Updated: 2019/03/11 00:02:29 by patrisor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*srcc;
	char	*dstc;
	size_t	i;

	i = 0;
	srcc = (char *)src;
	dstc = (char *)dst;
	if (srcc < dstc)
		while ((int)(--len) >= 0)
			*(dstc + len) = *(srcc + len);
	else
		while (i++ < len)
			*(dstc + i) = *(srcc + i);
	return (dst);
}

#include <stdio.h>
int main (void)
{
	int src[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	char *dst = "12345678910";
	printf("%p\n%p\n", dst, src);
	printf("%p",ft_memmove(&dst, &src, 5));
	return 0;
}
