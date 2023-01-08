#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
# endif

/* Funciones getNextLine */
char *get_next_line(int fd);
char *ft_read_buff(int fd, char *save_buff);

/* Funciones Extras */
int ft_strlen(char *str);
char *ft_strjoin(char *save_buff, char *buff);
int ft_strchr(char *save_buff, char c);
char *ft_get_line(char *s);
char *ft_next_save(char *save_buff);

#endif