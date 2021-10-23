#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# define BUFFER_SIZE 1000

/* Funciones getNextLine */
char *get_next_line(int fd);
char *read_buff(int fd, char *save_buff);

/* Funciones Extras */
int ft_strlen(char *str);
char *ft_strjoin(char *save_buff, char *buff);
int ft_strchr(char *save_buff, int c);
char *ft_get_line(char *s);
char *ft_next_save(char *full_buff);

#endif
