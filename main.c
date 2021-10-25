#include "get_next_line.h"

int main(void)
{
	int fd;
	char *res;


	fd = open("prueba.txt", O_RDONLY);
	do
	{
		res = get_next_line(fd);
		printf("---main--\n");
		printf("%s\n", res);
	}while(res);
}
