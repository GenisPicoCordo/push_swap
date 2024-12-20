/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotators.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:18:34 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/04 11:07:38 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// Reverse rotate a: Desplaza hacia abajo todos los elementos del stack 
// a una posición, de forma que el último elemento se convierte en el primero.
void	rra(t_stack *a)
{
	t_node	*prev;
	t_node	*last;

	if (a->size < 2)
		return ;
	last = a->top;
	prev = NULL;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = a->top;
	a->top = last;
	write(1, "rra\n", 4);
}

// Reverse rotate b: Desplaza hacia abajo todos los elementos del stack 
// a una posición, de forma que el último elemento se convierte en el primero.
void	rrb(t_stack *b)
{
	t_node	*prev;
	t_node	*last;

	if (b->size < 2)
		return ;
	last = b->top;
	prev = NULL;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = b->top;
	b->top = last;
	write(1, "rrb\n", 4);
}

// rrr rra y rrb al mismo tiempo.
void	rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rrb(b);
	write(1, "rrr\n", 4);
}
