#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#define BUFF 10

int main(void)
{
	int fd, lu;
	char s[100];
	
	int i = 0;
		
	fd = open("prueba.txt", O_RDONLY);
	//printf("%d\n", fd);
	lu = read (fd, s, BUFF);
	while(s[i] != '\0')
	{
		printf("i = %d -- %c\n", i, s[i]);
   		i++;	
	}
	read (fd, s, BUFF);
	i = 0;
	while(s[i] != '\0')
	{
		printf("i = %d -- %c\n", i, s[i]);
   		i++;	
	}
	printf("%s\n", s);
	read (fd, s, BUFF);
	printf("%s\n", s);
	read (fd, s, BUFF);
	printf("%s\n", s);
	read (fd, s, BUFF);
	printf("%s\n", s);

}
