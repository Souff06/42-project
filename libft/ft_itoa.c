/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smghirat <smghirat@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:12:43 by smghirat          #+#    #+#             */
/*   Updated: 2026/10/22 14:12:44 by smghirat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t count_len(long n)
{
    long i;

    i = 0;
    if (n <= 0)
    {
        n *= -1;
        i++;
    }
    while (n > 0)
    {
        n /= 10;
        i++;
    }
    return (i);
}
char *ft_itoa(int n)
{
    char *str;
    long number;
    size_t len;

    number = n;
    len = count_len(number);
    str = malloc(sizeof(char) * (len + 1));
    if (!str)
        return 0;
    str[len] = '\0';
    if (number < 0)
    {
        str[0] = '-';
        number = -number;
    }
    if (number == 0)
        str[0] = '0';
    while (number)
    {
        str[--len] = (number % 10) + '0';
        number /= 10;
    }
    return (str);
}

/*
int main (void)
{
    char result;

    result = ft_itoa(-541);
    printf("resultat : %s\n", result);
    free (result);
    return 0;
}*/