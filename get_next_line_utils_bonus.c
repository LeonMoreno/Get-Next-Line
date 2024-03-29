/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Leon.M <lmoreno@student.42quebec.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:32:31 by LeoMoreno         #+#    #+#             */
/*   Updated: 2021/10/26 11:00:56 by Leon.M           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_strlen(char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strchr(char *save_buff, char c)
{
	int	i;

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

char	*ft_strjoin(char *save_buff, char *buff)
{
	int		i;
	int		j;
	char	*s_join;

	if (!save_buff)
	{
		save_buff = (char *) malloc(sizeof(*save_buff) * 1);
		save_buff[0] = '\0';
	}
	if (!save_buff || !buff)
		return (NULL);
	s_join = malloc(sizeof(char)
			* (ft_strlen(save_buff) + ft_strlen(buff)) + 1);
	if (!s_join)
		return (NULL);
	i = -1;
	while (save_buff[++i] != '\0')
		s_join[i] = save_buff[i];
	j = 0;
	while (buff[j] != '\0')
		s_join[i++] = buff[j++];
	s_join[i] = '\0';
	free(save_buff);
	return (s_join);
}

char	*ft_get_line(char *s)
{
	char	*per_line;
	int		i;

	i = 0;
	if (!s[i])
		return (NULL);
	while (s[i] && s[i] != '\n')
		i++;
	per_line = (char *) malloc(sizeof(*per_line) * i + 2);
	if (!per_line)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != '\n')
	{
		per_line[i] = s[i];
		i++;
	}
	if (s[i] == '\n')
	{
		per_line[i] = '\n';
		i++;
	}
	per_line[i] = '\0';
	return (per_line);
}

char	*ft_next_save(char *full_buff)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	while (full_buff[i] && full_buff[i] != '\n')
		i++;
	if (!full_buff[i])
	{
		free(full_buff);
		return (NULL);
	}
	str = (char *) malloc(sizeof(*str) * ft_strlen(full_buff) - i + 1);
	if (!str)
		return (NULL);
	i++;
	while (full_buff[i] != '\0')
		str[j++] = full_buff[i++];
	str[j] = '\0';
	free (full_buff);
	return (str);
}