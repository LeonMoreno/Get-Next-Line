#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# define BUFFER_SIZE 10

/* Funciones getNextLine */
char *get_next_line(int fd);
char *read_line(int fd, char *str_join);

/* Funciones Extras */
char *ft_strjoin(char *s1, char *s2);
char *ft_strchr(char *s1, char c);
char *ft_get_line(char *s);
char *ft_save_str(char *save_str);

#endif
