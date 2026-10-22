/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smghirat <smghirat@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:14:03 by smghirat          #+#    #+#             */
/*   Updated: 2026/10/22 14:14:04 by smghirat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *str;
    size_t lent;

	if (!s1 || !s2)
		return (NULL);
    lent = ft_strlen(s1) + ft_strlen(s2) + 1;
    str = malloc(lent);
    if (!str)
        return (NULL);
    ft_strlcpy(str, s1, lent);
    ft_strlcat(str, s2, lent);
    return (str);
}