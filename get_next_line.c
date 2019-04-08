/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patrisor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 02:51:02 by patrisor          #+#    #+#             */
/*   Updated: 2019/04/08 15:25:27 by patrisor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_new_line(char **stat, char **line, int fd, int bytes)
{
	char	*tmp;
	int		len;

	len = 0;
	while (stat[fd][len] != '\n' && stat[fd][len] != '\0')
		len++;
	if (stat[fd][len] == '\n')
	{
		*line = ft_strsub(stat[fd], 0, len);
		tmp = ft_strdup(stat[fd] + len + 1);
		free(stat[fd]);
		stat[fd] = tmp;
		if (stat[fd][0] == '\0')
			ft_strdel(&stat[fd]);
	}
	else if (stat[fd][len] == '\0')
	{
		if (bytes == BUFF_SIZE)
			return (get_next_line(fd, line));
		*line = ft_strdup(stat[fd]);
		ft_strdel(&stat[fd]);
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static char	*stat[1024];
	char		buf[BUFF_SIZE + 1];
	char		*tmp;
	int			bytes;

	if (fd < 0 || line == NULL)
		return (-1);
	while ((bytes = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[bytes] = '\0';
		if (stat[fd] == NULL)
			stat[fd] = ft_strnew(1);
		tmp = ft_strjoin(stat[fd], buf);
		free(stat[fd]);
		stat[fd] = tmp;
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (bytes < 0)
		return (-1);
	else if (bytes == 0 && (stat[fd] == NULL || stat[fd][0] == '\0'))
		return (0);
	return (ft_new_line(stat, line, fd, bytes));
}
