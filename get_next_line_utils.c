#include "get_next_line.h"

int ft_strlen(char *str)
{
	int i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
			i++;
	return (i);
}

char *ft_strchr(char *save_buff, char c)
{
	int i;

	i = 0;
	if (!save_buff)
		return (NULL);
	while (save_buff[i] != '\0')
	{
		if (save_buff[i] == c)
			return ((char *)&save_buff[i]);
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
	printf("Buff es  %s \n", buff);
	if (!s1)
	{
		s1 = malloc(sizeof(char));
		s1[0] = '\0';
	} 
	printf("Buff aqui arriba  %s \n", buff);
	if (!s1)
		return (NULL);
	s_join = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(buff) + 1));
	if (!s_join)
		return (NULL);
	printf("Buff aqui es  %s \n", buff);
	while (s1[i] != '\0')
	{
		s_join[i] = s1[i];
		i++;
	}
	while (buff[j] != '\0')
	{
		s_join[i] = buff[j];
		i++;
		j++;
	}
	s_join[i] = '\0';
	printf("S_Join = %s\n", s_join);
	return (s_join);

}

