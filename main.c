#include "get_next_line.h"

int main(void)
{
	int fd;
	char *str;
	int i;

	i = 0;
	fd = open("prueba.txt", O_RDONLY);
	do
	{
		str = get_next_line(fd);
		puts("-----Main------------");
		printf("Vez: %d %s\n", i++, str);
		/*str = get_next_line(fd);
		puts("-----Main------------");
		printf("Vez %d %s\n", i++, str);
		str = get_next_line(fd);
		puts("-----Main------------");
		printf("Vez %d %s\n", i++, str);
		str = get_next_line(fd);
		puts("-----Main------------");
		printf("Vez %d %s\n", i++, str);
		str = get_next_line(fd);
		puts("-----Main------------");
		printf("Vez %d %s\n", i++, str);
		//str = get_next_line(fd);
		//puts("-----Main------------");
		//printf("Vez %d %s\n", i++, str);*/
	} while(str != NULL);
	return (0);
}

