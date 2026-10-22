/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smghirat <smghirat@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:13:09 by smghirat          #+#    #+#             */
/*   Updated: 2026/10/22 14:13:10 by smghirat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

t_list    *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list    *new_list;
    t_list    *new_node;
    void    *content;

    if (!lst || !f || !del)
        return (NULL);
    new_list = NULL;
    while (lst)
    {
        content = f(lst->content);
        new_node = ft_lstnew(content);
        if (!new_node)
        {
            if (content)
                del(content);
            ft_lstclear(&new_list, del);
            return (NULL);
        }
        ft_lstadd_back(&new_list, new_node);
        lst = lst->next;
    }
    return (new_list);
}