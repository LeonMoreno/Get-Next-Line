#include "get_next_line.h"

/*int main(void)
{
	int fd;
	char *res;

	fd = open("prueba.txt", O_RDONLY);
	do
	{
		res = get_next_line(fd);
		printf("---main--\n");
		printf("%s\n", res);
		if (res)
		free(res);
	}while(res);
	if (res)
	free(res);
	fd = open("prueba2.txt", O_RDONLY);
	if (res)
	free(res);
	close(fd);
	return (0);
} */

int	main(void)
{
	char	*line;
	int		i;
	int		fd1;
	int		fd2;
	int		fd3;

	fd1 = open("prueba.txt", O_RDONLY);
	fd2 = open("prueba2.txt", O_RDONLY);
	fd3 = open("prueba3.txt", O_RDONLY);
	i = 1;
	while (i < 7)
	{
		line = get_next_line(fd1);
		printf("line [%02d]: %s", i, line);
		free(line);
		line = get_next_line(fd2);
		printf("line [%02d]: %s", i, line);
		free(line);
		line = get_next_line(fd3);
		printf("line [%02d]: %s", i, line);
		free(line);
		i++;
	}
	close(fd1);
	close(fd2);
	close(fd3);
	return (0);
}
