/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:30:54 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/03 14:31:59 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// La operación pa, push a, toma el elemento en la cima del stack b y 
// lo coloca en la cima del stack a. Si b está vacío, no hace nada.
void	pa(t_stack *a, t_stack *b)
{
	t_node	*temp;

	if (b->size == 0)
		return ;
	temp = b->top;
	b->top = temp->next;
	temp->next = a->top;
	a->top = temp;
	b->size--;
	a->size++;
}

// La operación pb, push b, toma el elemento en la cima del stack a y 
// lo coloca en la cima del stack b. Si a está vacío, no hace nada.
void	pb(t_stack *a, t_stack *b)
{
	t_node	*temp;

	if (a->size == 0)
		return ;
	temp = a->top;
	a->top = temp->next;
	temp->next = b->top;
	b->top = temp;
	a->size--;
	b->size++;
}
