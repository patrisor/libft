/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patrisor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 20:58:31 by patrisor          #+#    #+#             */
/*   Updated: 2019/03/09 17:00:02 by patrisor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static	int	is_space(char c)
{
	return (c == '\n' || c == '\t' || c == ' ');
}

static	int	has_whitespaces(char *str, int *i, size_t *j)
{
	while (is_space(*(str + *i)))
		(*i)++;
	while (is_space(*(str + *j)))
		(*j)--;
	if (*i || *j < ft_strlen(str))
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	size_t	j;
	int		k;
	char	*new_string;
	size_t	new_size;

	if (!s)
		return (NULL);
	i = 0;
	k = 0;
	j = ft_strlen(s) - 1;
	if (!has_whitespaces((char *)s, &i, &j) || !ft_strlen(s))
		return ((char *)s);
	new_size = (i == (int)ft_strlen(s)) ? 0 : ft_strlen(s) - (size_t)i - \
					(ft_strlen(s) - j);
	new_string = ft_strnew(new_size + 1);
	if (!new_string)
		return (NULL);
	while (i <= (int)j)
		*(new_string + k++) = *(s + i++);
	return (new_string);
}
