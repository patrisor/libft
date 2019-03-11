/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchange.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patrisor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 14:51:18 by patrisor          #+#    #+#             */
/*   Updated: 2019/03/09 16:46:29 by patrisor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strchange(size_t size, char c)
{
	char	*string;
	int		i;

	if ((string = malloc(size)) == NULL)
		return (NULL);
	i = 0;
	while ((size_t)i < size)
	{
		*(string + i) = c;
		i++;
	}
	return (string);
}
