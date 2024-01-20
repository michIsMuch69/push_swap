/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 09:40:43 by jedusser          #+#    #+#             */
/*   Updated: 2023/12/06 15:59:51 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countwords(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static size_t	lenstr(char const *s, char c, size_t start)
{
	size_t	len;

	len = 0;
	while (s[start] != c && s[start] != '\0')
	{
		len++;
		start++;
	}
	return (len);
}

static void	freetab(char **array, size_t size)
{
	while (size > 0)
	{
		free(array[size]);
		size--;
	}
	free(array[size]);
	free(array);
}

static char	**allocatetab(const char *s, char c, char **tab)
{
	size_t	len;
	size_t	x;
	size_t	index;

	len = 0;
	index = 0;
	x = 0;
	while (s[index] && x < countwords(s, c))
	{
		if (s[index] != c && s[index])
		{
			len = lenstr(s, c, index);
			tab[x] = ft_substr(s, index, len);
			if (tab[x] == NULL)
				return (freetab(tab, x), NULL);
			x++;
			index = index + len;
		}
		index++;
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = ft_calloc(countwords(s, c) + 1, (sizeof(char *)));
	if (tab == NULL)
		return (NULL);
	return (allocatetab(s, c, tab));
}
