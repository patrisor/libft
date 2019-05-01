/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patrisor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 22:37:01 by patrisor          #+#    #+#             */
/*   Updated: 2019/04/29 22:37:25 by patrisor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <stdio.h>
#include "includes/libft.h"
int		main(int argc, char **argv)
{
	if(argc != 3)
		return -1;
	printf("%d\n", ft_add(atoi(argv[1]), atoi(argv[2])));
	return 0;
}
