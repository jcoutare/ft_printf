/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_tools.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 15:19:25 by jcoutare          #+#    #+#             */
/*   Updated: 2017/09/12 17:38:23 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lol.h"

char	*ft_strnjoin(char const *s1, char const *s2, int n)
{
	char		*str;
	size_t		i;
	size_t		j;
	size_t		size;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	if ((str = malloc(sizeof(char) * (size + 1))) == 0)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] && j < n)
	{
		str[i + j] = s2[j];
		j++;
	}
	if (s1)
		free((void *)s1);
	str[i + j] = '\0';
	return (str);
}

int		strichr(char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int		strichr_str(char *str, char *chr)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (chr[j])
		{
			if (str[i] == chr[j])
			{
				printf("stop at : %c\n", str[i]);
				return (i);
			}
			j++;
		}
		i++;
	}
	return (0);
}

char	*cpy_until_c(char *str, int c)
{
	int i;
	char *dst;
	int j;

	j = 0;
	i = 0;
	while (str[i] && str[i] != c)
		i++;
	if ((dst = malloc(sizeof(char *) * (i + 1))) == NULL)
		return (NULL);
	dst[i] = '\0';
	while (j < i)
	{
		dst[j] = str[j];
		j++;
	}
	return (dst);
}
