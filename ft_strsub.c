/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patrisor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 20:58:09 by patrisor          #+#    #+#             */
/*   Updated: 2019/03/09 16:59:40 by patrisor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new_string;
	size_t	i;

	if (!s)
		return (NULL);
	new_string = ft_strnew(len);
	if (!new_string)
		return (NULL);
	i = 0;
	while (i < len)
		*(new_string + i++) = *(s + start++);
	return (new_string);
}
