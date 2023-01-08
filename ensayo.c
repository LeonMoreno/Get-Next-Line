#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#define BUFF 10

int main(void)
{
	int fd1, fd2, fd3, lu;
	char s[100];
	
	int i = 0;
		
	fd1 = open("prueba.txt", O_RDONLY);
	fd2 = open("prueba2.txt", O_RDONLY);
	fd3 = open("prueba3.txt", O_RDONLY);
	lu = read (fd1, s, BUFF);
	printf("%s\n", s);
	read (fd1, s, BUFF);
	printf("%s\n", s);
	read (fd1, s, BUFF);
	printf("%s\n", s);
	read (fd1, s, BUFF);
	printf("%s\n", s);
	read (fd2, s, BUFF);
	printf("%s\n", s);
	read (fd2, s, BUFF);
	printf("%s\n", s);
	printf("---\n");
	read (fd1, s, BUFF);
	printf("%s\n", s);
	read (fd1, s, BUFF);
	printf("%s\n", s);
	read (fd2, s, BUFF);
	printf("%s\n", s);
	read (fd1, s, BUFF);
	printf("%s\n", s);
}
