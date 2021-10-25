#include "get_next_line.h"

char *get_next_line(int fd)
{
	static char *save_buff;
	//char *line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);

	save_buff = ft_read_buff(fd, save_buff);
	if (!save_buff)
		return (NULL);
	return (save_buff);
}

char *ft_read_buff(int fd, char *save_buff)
{
	char *buff;
	int rd_byt;

	buff = (char *) malloc(sizeof(*buff) * BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	rd_byt = 1;
	while (rd_byt != 0)
	{
		rd_byt = read(fd, buff, BUFFER_SIZE);
		printf("Buff read %d %s\n", rd_byt, buff);
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
