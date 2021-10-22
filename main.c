#include "get_next_line.h"

int main(void)
{
	int fd;
	char *str;

	fd = open("prueba.txt", O_RDONLY);
//	do
//	{
		str = get_next_line(fd);
		puts("-----Main------------");
		printf("%s\n", str);
		str = get_next_line(fd);
		puts("-----Main------------");
		printf("%s\n", str);
		str = get_next_line(fd);
		puts("-----Main------------");
		printf("%s\n", str);
		str = get_next_line(fd);
		puts("-----Main------------");
		printf("%s\n", str);
		str = get_next_line(fd);
		puts("-----Main------------");
		printf("%s\n", str);
//	} while(str != NULL);
	return (0);
}

