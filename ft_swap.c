/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patrisor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 20:59:41 by patrisor          #+#    #+#             */
/*   Updated: 2019/03/09 17:00:16 by patrisor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_swap(void *data1, void *data2, size_t size)
{
	unsigned char *temp_data;

	temp_data = (unsigned char *)malloc(size * sizeof(unsigned char));
	if (temp_data == NULL)
		return ;
	ft_memmove(temp_data, data1, size);
	ft_memmove(data1, data2, size);
	ft_memmove(data2, temp_data, size);
	free(temp_data);
}
