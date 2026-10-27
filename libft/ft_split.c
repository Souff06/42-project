/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smghirat <smghirat@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:13:49 by smghirat          #+#    #+#             */
/*   Updated: 2026/10/22 14:13:50 by smghirat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	**ft_free_split(char **array, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

static char	**ft_fill_words(char **array, char const *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	length;
	size_t	index;

	i = 0;
	index = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			length = i - start;
			array[index] = ft_substr(s, start, length);
			if (!array[index])
				return (ft_free_split(array, index));
			index++;
		}
		else
			i++;
	}
	array[index] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	word_count;

	if (!s)
		return (NULL);
	word_count = ft_count_words(s, c);
	array = malloc((word_count + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	if (!ft_fill_words(array, s, c))
		return (NULL);
	return (array);
}
