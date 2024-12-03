/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:29:52 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/03 14:30:46 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// swap a: intercambiar los dos primeros elementos de la pila a
void	sa(t_stack *a)
{
	t_node	*first;
	t_node	*second;

	if (a->size < 2)
		return ;
	first = a->top;
	second = first->next;
	first->next = second->next;
	second->next = first;
	a->top = second;
}

// swap b: intercambiar los dos primeros elementos de la pila b
void	sb(t_stack *b)
{
	t_node	*first;
	t_node	*second;

	if (b->size < 2)
		return ;
	first = b->top;
	second = first->next;
	first->next = second->next;
	second->next = first;
	b->top = second;
}

// intercambiar los dos primeros elementos de la pila a y b a la vez
void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
}
