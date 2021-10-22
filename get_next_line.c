/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: LeoMoreno <lmoreno@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 17:41:14 by LeoMoreno         #+#    #+#             */
/*   Updated: 2021/10/21 18:17:01 by LeoMoreno        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_line(int fd, char *str_join)
{
	char	*buff;
	int		bytes_lu;

	buff = malloc(sizeof(*buff) * BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	bytes_lu = 1;
	while (!ft_strchr(str_join, '\n') && bytes_lu != 0)
	{
		bytes_lu = read(fd, buff, BUFFER_SIZE);
		if (bytes_lu == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[bytes_lu] = '\0';
		str_join = ft_strjoin(str_join, buff);
	}
	free (buff);
	return (str_join);
}

char	*get_next_line(int fd)
{
	static char	*line_lu;
	char		*line;
	
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);	
	line_lu = read_line(fd, line_lu);
	if (!line_lu)
		return (NULL);
	line = ft_get_line(line_lu);
	line_lu = ft_save_str(line_lu);
	return (line);
}
