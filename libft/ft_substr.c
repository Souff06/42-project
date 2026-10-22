/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smghirat <smghirat@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:14:30 by smghirat          #+#    #+#             */
/*   Updated: 2026/10/22 14:14:31 by smghirat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;
    size_t lens;

    if (!s)
    return (NULL);

lens = ft_strlen(s);

if (start >= lens)
    len = 0;
else if (len > lens - start)
    len = lens - start;

str = malloc(len + 1);
if (!str)
    return (NULL);

size_t i = 0;
while (i < len)
{
    str[i] = s[start + i];
    i++;
}
str[i] = '\0';

return (str); 
}

