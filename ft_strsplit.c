/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patrisor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 20:50:38 by patrisor          #+#    #+#             */
/*   Updated: 2019/03/09 16:59:14 by patrisor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static	int	get_str_len(char const *str, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**string;

	if (!s || !(string = (char **)malloc(sizeof(*string) *
			(ft_countwords(s, c) + 1))))
		return (NULL);
	i = -1;
	j = 0;
	while (++i < ft_countwords(s, c))
	{
		k = 0;
		if (!(string[i] = ft_strnew(get_str_len(&s[j], c) + 1)))
			string[i] = NULL;
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			string[i][k++] = s[j++];
		string[i][k] = '\0';
	}
	string[i] = 0;
	return (string);
}
