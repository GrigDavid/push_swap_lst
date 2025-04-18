/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgrigor2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:25:17 by dgrigor2          #+#    #+#             */
/*   Updated: 2025/04/09 13:25:19 by dgrigor2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include "ft_printf.h"
# include <stdlib.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}	t_list;

int		ft_atoi(const char *str);
t_list	*ft_lstnew(int content);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst);
void	ft_lstiter(t_list *lst, void (*f)(int));
//
t_list	*lst_ise(int *arr, int len);
//
void	ft_putnbr(int n);
void	sort(int *arr, int len);
void	normalise(int *a, int *b, int len);
int		*parser(int argc, char **argv);
//
void	ra(t_list **lst, int stack);
void	rra(t_list **lst, int stack);
void	sa(t_list **t_list, int stack);
void	pa(t_list **a, t_list **b, int stack);
//
void	babshka(t_list **a, t_list **b);
void	sort_three(t_list **lst);
//void	algo(t_list **a, t_list **b);

#endif
