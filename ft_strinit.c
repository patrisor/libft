/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strinit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patrisor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 05:36:35 by patrisor          #+#    #+#             */
/*   Updated: 2019/05/03 05:39:44 by patrisor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

// Initialize a string with a given character to a given length

char	*ft_strinit(size_t size, int c)
{
	return((char *)ft_nmemset(malloc(size + 1), c, size + 1));
}
