/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   qs.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patrisor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 00:42:40 by patrisor          #+#    #+#             */
/*   Updated: 2019/04/29 01:46:02 by patrisor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_quicksort(int *array, int left, int right)
{
	int		tmp;

	if(left >= right)
		return;
	int i = left;
	int j = right;
	int pivot = array[i];
	while(1)
	{
		while(array[i] < pivot)
			i++;
		while(pivot < array[j])
			j--;
		if(i >= j)
			break;
		tmp = array[i];
		array[i] = array[j]; 
		array[j] = tmp;
		i++; 
		j--;
	}
	ft_quicksort(array, left, i - 1);
	ft_quicksort(array, j + 1, right);
}
