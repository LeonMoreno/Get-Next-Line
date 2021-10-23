#include "get_next_line.h"

char *ft_read_buff(int fd, char *save_buff)
{
	int		read_bytes;
	char	*buff;

	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	read_bytes = 1;
	while (!ft_strchr(save_buff, '\n') && read_bytes != 0)
	{
		read_bytes = read(fd, buff, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[read_bytes] = '\0';
		save_buff = ft_strjoin(save_buff, buff);
	}
	free(buff);
	return (save_buff);
}

char	*get_next_line(int fd)
{
	static char	*full_buff;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	full_buff = ft_read_buff(fd, full_buff);
	if (!full_buff)
		return (NULL);
	line = ft_get_line(full_buff);
	full_buff = ft_next_save(full_buff);
	return (line);
}
