/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Leon.M <lmoreno@student.42quebec.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:32:02 by LeoMoreno         #+#    #+#             */
/*   Updated: 2021/10/26 11:01:01 by Leon.M           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*save_buff;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	save_buff = ft_read_buff(fd, save_buff);
	if (!save_buff)
		return (NULL);
	line = ft_get_line(save_buff);
	save_buff = ft_next_save(save_buff);
	return (line);
}

char	*ft_read_buff(int fd, char *save_buff)
{
	char	*buff;
	int		rd_byt;

	buff = (char *) malloc(sizeof(*buff) * BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	rd_byt = 1;
	while (!ft_strchr(save_buff, '\n') && rd_byt != 0)
	{
		rd_byt = read(fd, buff, BUFFER_SIZE);
		if (rd_byt == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[rd_byt] = '\0';
		save_buff = ft_strjoin(save_buff, buff);
	}
	free (buff);
	return (save_buff);
}