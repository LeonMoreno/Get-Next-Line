#include "get_next_line.h"

int ft_strlen(char *str)
{
	int i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int ft_strchr(char *save_buff, char c)
{
	int i;

	if (!save_buff)
		return (0);
	i = 0;
	while (save_buff[i] != '\0')
	{
		if (save_buff[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char *ft_strjoin(char *save_buff, char *buff)
{
	int i;
	int j;
	char *s_join;

	if (!save_buff)
	{
		save_buff = (char *) malloc(sizeof(*save_buff) * 1);
		save_buff[0] = '\0';
	}
	if (!save_buff || !buff)
		return (NULL);
	s_join = (char *) malloc(sizeof(*s_join) * (ft_strlen(save_buff) + ft_strlen(buff)) + 1);
	if (!s_join)
		return (NULL);
	i = 0;
	while (save_buff[i] != '\0')
	{
		s_join[i] = save_buff[i];
		i++;
	}
	j = 0;
	while (buff[j] != '\0')
	{
		s_join[i] = buff[j];
		i++;
		j++;
	}
	s_join[i] = '\0';
	free(save_buff);
	return (s_join);
}

