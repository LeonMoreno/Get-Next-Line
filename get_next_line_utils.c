#include "get_next_line.h"

int ft_strlen(char *str)
{
	size_t i;
	
	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int ft_strchr(char *str, char c)
{
	int i;
	
	i = 0;	
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == c)
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

	i = 0;
	if (!save_buff)
	{
		save_buff = (char *) malloc(sizeof(*save_buff));
		save_buff[0] = '\0';
	}
	if (!save_buff || !buff)
		return (NULL);
	s_join = (char *) malloc(sizeof(char) * (ft_strlen(save_buff) + ft_strlen(buff) + 1));
	if (!s_join)
		return (NULL);
	while (save_buff[i] && save_buff[i] != '\0')
	{
		s_join[i] = save_buff[i];
		i++;
	}
	j = 0;
	while (buff[j] && buff[j] != '\0')
	{
		s_join[i] = buff[j];
		j++;
		i++;
	}
	s_join[i] = '\0';
	free (save_buff);
	return (s_join);
}

char *ft_get_line(char *s)
{
	int i;
	char *sole_line;

	i = 0;
	if (!s[i])
		return (NULL);
	while (s[i] && s[i] != '\n')
	{
		i++;
	}
	sole_line = (char *) malloc(sizeof(*sole_line) * (i + 2));
	if (!sole_line)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != '\n')
	{
		sole_line[i] = s[i];
		i++;
	}
	if (s[i] == '\n')
	{
		sole_line[i] = s[i];
		i++;
	}
	sole_line[i] = '\0';
	return (sole_line);
}

char *ft_next_save(char *full_buff)
{
	int 	i;
	char	*str;
	int		j;

	i = 0;
	while (full_buff[i] && full_buff[i] != '\n')
		i++;
	if (!full_buff[i])
	{
		free(full_buff);
		return (NULL);
	}
	str = (char *) malloc(sizeof(*str) * (ft_strlen(full_buff) - i) + 1);
	if (!str)
		return (NULL);
	i++;
	j = 0;
	while (full_buff[i] != '\0')
	{
		str[j] = full_buff[i];
		i++;
		j++;
	}
	str[j] = '\0';
	free(full_buff);
	return (str);
}
