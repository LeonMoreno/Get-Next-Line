#include "get_next_line.h"

int main(void)
{
	int fd;
	char *line;

	fd = open("prueba.txt", O_RDONLY);
	line = get_next_line(fd);
	printf("\n---------MAiN---------\n\n");
	printf("%s\n\n", line);
	line = get_next_line(fd);
	printf("\n---------MAiN---------\n\n");
	printf("%s\n\n", line);
	line = get_next_line(fd);
	printf("\n---------MAiN---------\n\n");
	printf("%s\n\n", line);
	line = get_next_line(fd);
	printf("\n---------MAiN---------\n\n");
	printf("%s\n\n", line);
	line = get_next_line(fd);
	printf("\n---------MAiN---------\n\n");
	printf("%s\n\n", line);
	line = get_next_line(fd);
	printf("\n---------MAiN---------\n\n");
	printf("%s\n\n", line);
}
