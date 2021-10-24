#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*line;
	static char	*save_buff;

	if (fd < 0 || BUFFER_SIZE == 0)
		return (NULL);
	save_buff = ft_read_buff(fd, save_buff);
	line = ft_get_line(save_buff);
	printf("GNLPpal = %s\n", line);
	save_buff = ft_next_save (save_buff);
	if (!save_buff)
		return (NULL);
	return (line);
}

char	*ft_read_buff(size_t fd, char *save_buff)
{
	char	*buff;
	int		byt_read;

	buff = malloc(sizeof(*buff) * BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	byt_read = 1;
	while (!ft_strchr(save_buff, '\n') && byt_read != 0)
	{
		byt_read = read(fd, buff, BUFFER_SIZE);
		buff[byt_read] = '\0';
		//printf("BufRead = %d, %s\n", byt_read, buff);
		if (byt_read == -1)
		{
			free(buff);
			return (NULL);
		}
		save_buff = ft_strjoin(save_buff, buff);;
	}
	free (buff);
	return (save_buff);
}
