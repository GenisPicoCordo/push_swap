/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotators.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:33:24 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/03 14:33:47 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// Rotate a: Desplaza hacia arriba todos los elementos del stack a 
// una posición, de forma que el primer elemento se convierte en el último.
void	ra(t_stack *a)
{
	t_node	*first;
	t_node	*last;

	if (a->size < 2)
		return ;
	first = a->top;
	a->top = first->next;
	last = a->top;
	while (last->next)
	{
		last = last->next;
	}
	last->next = first;
	first->next = NULL;
	write(1, "ra\n", 3);
}

// Rotate b: Desplaza hacia arriba todos los elementos del stack a 
// una posición,de forma que el primer elemento se convierte en el último.
void	rb(t_stack *b)
{
	t_node	*first;
	t_node	*last;

	if (b->size < 2)
		return ;
	first = b->top;
	b->top = first->next;
	last = b->top;
	while (last->next)
	{
		last = last->next;
	}
	last->next = first;
	first->next = NULL;
	write(1, "rb\n", 3);
}

// ra y rb al mismo tiempo.
void	rr(t_stack *a, t_stack *b)
{
	ra(a);
	rb(b);
	write(1, "rr\n", 3);
}
