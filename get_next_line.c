#include "get_next_line.h"

char *ft_read_buff(int fd, char *save_buff)
{
	int		read_bytes;
	char	*buff;

	buff = malloc(sizeof(*buff));
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
		printf("Buffer leido %d : %s\n", read_bytes, buff);
		save_buff = ft_strjoin(save_buff, buff);
	}
	if (read_bytes == 0)
		return (NULL);
	return (save_buff);
}

char	*get_next_line(int fd)
{
	static char	*full_buff;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	full_buff = ft_read_buff(fd, full_buff);
	printf("Full Buff leido %s\n", full_buff);
	return (full_buff);
}
