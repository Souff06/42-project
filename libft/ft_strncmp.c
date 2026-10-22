/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smghirat <smghirat@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:14:18 by smghirat          #+#    #+#             */
/*   Updated: 2026/10/22 14:14:19 by smghirat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while (n > 0 && s1[i] && s2[i])
    {
         if (s1[i] != s2[i] && i < n)
            return ((unsigned char) s1[i] - (unsigned char) s2[i]);
        else
            i++;
    }
    return (0);
}
