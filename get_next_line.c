#include "get_next_line.h"


char *read_line(int fd, char *str_join)
{
	char *buff;
	int bytes_lu;

	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	//if (buff == NULL)
	//	return (NULL);
	bytes_lu = 1;
	while (!ft_strchr(str_join, '\n') && bytes_lu != 0)
	//while (bytes_lu != 0)
	{
		//if (bytes_lu == -1)
		//	free(buff);
		bytes_lu = read(fd, buff, BUFFER_SIZE);
		buff[bytes_lu] = '\0';
		printf("size_buff = %d, buff = %s\n", bytes_lu, buff);
		str_join = ft_strjoin(str_join, buff);
	}
	free (buff);
	return (str_join);
}

char *get_next_line(int fd)
{
	static char *line_lu;
	char *line;

	line_lu = read_line(fd, line_lu);
	line = ft_get_line(line_lu);
	line_lu = ft_save_str(line_lu);
	printf("\nLineLU: %s \n\n", line_lu);

	return (line);
}
