/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: LeoMoreno <lmoreno@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 17:43:04 by LeoMoreno         #+#    #+#             */
/*   Updated: 2021/10/21 18:30:21 by LeoMoreno        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *s1)
{
	size_t	i;

	i = 0;
	if (!s1)
		return (0);
	while (s1[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		x;
	int		y;
	char	*ptr;

	x = 0;
	y = 0;
	if (!s1)
	{
		s1 = malloc(sizeof(char));
		s1[0] = '\0';
	}
	if (!s1)
		return (NULL);
	ptr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ptr)
		return (NULL);
	while (s1[x])
	{
		ptr[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
		ptr[x++] = s2[y++];
	ptr[x] = '\0';
	free (s1);
	return (ptr);
}

char	*ft_strchr(char *str, char c)
{
	int	i;

	i = 0;
	if (!str)
		return (NULL);
	if (c == '\0')
		return ((char *)&str[i]);
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}

char	*ft_get_line(char *s)
{
	char	*str;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] != '\n')
		i++;
	str = malloc((sizeof(char)) * i + 2);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\n')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_save_str(char *full_str)
{
	char	*save_str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (full_str[i] != '\n')
		i++;
	save_str = malloc(sizeof(char) * (ft_strlen(full_str) - i));
	if (!save_str)
		return (NULL);
	i++;
	while (full_str[i] != '\0')
		save_str[j++] = full_str[i++];
	save_str[j] = '\0';
	//free(save_str);
	return (save_str);
}
