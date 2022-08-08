/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 23:19:05 by mykman            #+#    #+#             */
/*   Updated: 2022/08/08 23:48:00 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DLIST_H
# define FT_DLIST_H

# include "ft_bool.h"

typedef struct s_dlist
{
	void			*content;
	struct s_dlist	*previous;
	struct s_dlist	*next;
}		t_dlist;

t_dlist	*ft_dlstnew(void *content);
t_dlist	*ft_dlstremove(t_dlist *elem);
t_dlist	*ft_dlstremove_front(t_dlist **lst);
t_dlist	*ft_dlstremove_back(t_dlist **lst);

t_dlist	*ft_dlstmax(t_dlist	*lst);
t_dlist	*ft_dlstmin(t_dlist	*lst);

t_dlist	*ft_dlstfirst(t_dlist *lst);
t_dlist	*ft_dlstlast(t_dlist *lst);
t_dlist	*ft_dlstmap(t_dlist *lst, void *(*f)(void *), void (*del)(void *));
t_dlist	*ft_dlstswap(t_dlist *elem1, t_dlist *elem2);

int		ft_dlstsize(t_dlist *lst, t_dlist *toward);

void	ft_dlstadd(t_dlist *new, t_dlist *previous, t_dlist *next);
t_bool	ft_dlstadd_front(t_dlist **alst, t_dlist *new);
t_bool	ft_dlstadd_back(t_dlist **alst, t_dlist *new);
t_bool	ft_dlstiter(t_dlist *lst, void (*f)(void *));
void	ft_dlstdelone(t_dlist *lst, void (*del)(void *));
void	ft_dlstclear(t_dlist **lst, void (*del)(void *));

#endif