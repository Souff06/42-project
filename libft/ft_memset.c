/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smghirat <smghirat@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:13:34 by smghirat          #+#    #+#             */
/*   Updated: 2026/10/22 14:13:35 by smghirat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    unsigned char *temp;

    i = 0;
    temp = (unsigned char *) s;
    while (i < n)
    {
        temp[i] = (unsigned char) c;
        i++;
    }
    return (s);
}

/*int main (void)
{
    char c = 'm';
    char s[11];
    ft_memset(s, 0, 11);
    ft_memset(s, c, 4);
    printf("%s\n", s);
}*/