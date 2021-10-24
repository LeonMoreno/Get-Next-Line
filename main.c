#include "get_next_line.h"

int main(void)
{
	int fd;
	char *str;

	fd = open("gnlTester/files/42_no_nl", O_RDONLY);
//	fd = open("prueba.txt", O_RDONLY);
	printf("%d\n", fd);
	do
	{
		str = get_next_line(fd);
		printf("---MaIN----\n");
		printf("%s\n", str);
	}while (str);
}
