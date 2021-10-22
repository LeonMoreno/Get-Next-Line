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
char *ft_strchr(char *save_buff, char c);
char *ft_get_line(char *s);
char *ft_save_str(char *save_str);

#endif
