#include "get_next_line.h"

int main(void)
{
	int	fd;
	char	*res;
	int	i;
	
	i = 1;
	fd = open("prueba.txt", O_RDONLY);
	do
	{
		res = get_next_line(fd);
		if (res)
		{
			printf("Line #%d: %s", i, res);
			free(res);
		}
		i++;
	}while(res);
	printf("-------\n");
	printf("EOF\n");
	if (res)
		free(res);
	close(fd);
	return (0);
} 
