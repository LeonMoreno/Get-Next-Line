#include "get_next_line.h"

int ft_strlen(char *str)
{
	size_t i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

int ft_strchr(char *save_buff, int c)
{
	int i;

	i = 0;
	if (!save_buff)
		return (0);
	while (save_buff[i] != '\0')
	{
		if (save_buff[i] == (char)c)
			return (1);
			//return ((char *)&save_buff[i]);
		i++;
	}
	return (0);
}

char *ft_strjoin(char *s1, char *buff)
{
	int i;
	int j;
	char *s_join;

	i = 0;
	j = 0;
	if (!s1)
	{
		s1 = malloc(sizeof(*s1));
		s1[0] = '\0';
	} 
	if (!s1 || !buff)
		return (NULL);
	s_join = malloc(sizeof(*s_join) * (ft_strlen(s1) + ft_strlen(buff) + 1));
	if (s_join == NULL)
		return (NULL);
	if (s1)
		while (s1[i] != '\0')
		{
			s_join[i] = s1[i];
			i++;
		}
	while (buff[j] != '\0')
		s_join[i++] = buff[j++];
	//s_join[ft_strlen(s1) + ft_strlen(buff)] = '\0';
	s_join[j] = '\0';
	free (s1);
	return (s_join);
}

char *ft_get_line(char *line)
{
	char *str;
	int i;

	i = 0;
	printf("FT_GET_LINE: %d\n", line[0]);
	if (!line)
		printf("NOLine %d\n", ft_strlen(line));
	else
		printf("SILine %d \n", ft_strlen(line));
	if (!line[i])
		return (NULL);
	while (line[i] != '\n')
		i++;
	str = malloc(sizeof(char) * (i + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (line[i] && line[i] != '\n')
	{
		str[i] = line[i];
		i++;
	}
	if (line[i] == '\n')
	{
		str[i] = line[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char *ft_next_save(char *full_buff)
{
	int i;
	int j;
	char *str;

	i = 0;
	while (full_buff[i] != '\n')
		i++;
	if (!full_buff[i])
	{
		free(full_buff);
		return (NULL);
	}
	str = malloc(sizeof(char) * (ft_strlen(full_buff) - i + 1));
	if(!str)
		return (NULL);
	i++;
	j = 0;
	while (full_buff[i] != '\0')
		str[j++] = full_buff[i++];
	str[j] = '\0';
	free(full_buff);
	return (str);
}
