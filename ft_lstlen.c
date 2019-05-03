/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patrisor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 03:24:02 by patrisor          #+#    #+#             */
/*   Updated: 2019/05/01 03:24:18 by patrisor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_lstlen(t_list *head)
{
	int	count;

	count = 0;
	while (head && head->content)
	{
		count++;
		head = head->next;
	}
	return (count);
}
