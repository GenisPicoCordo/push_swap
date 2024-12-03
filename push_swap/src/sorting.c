/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:18:47 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/03 16:42:49 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// ordenar 2 elementos
void	sort_two(t_stack *a)
{
	if (a->top->value > a->top->next->value)
		sa(a);
}

// ordenar 3 elementos
void	sort_three(t_stack *a)
{
	int	first;
	int	second;
	int	third;

	first = a->top->value;
	second = a->top->next->value;
	third = a->top->next->next->value;
	if (first > second && second < third && first < third)
		sa(a);
	else if (first > second && second > third)
	{
		sa(a);
		rra(a);
	}
	else if (first > second && first > third && second < third)
		ra(a);
	else if (first < second && first > third)
		rra(a);
	else if (first < second && second > third)
	{
		sa(a);
		ra(a);
	}
}

// ordenar 5 o menos elementos
void	sort_five(t_stack *a, t_stack *b)
{
	int	min;

	while (a->size > 3)
	{
		min = find_min(a);
		while (a->top->value != min)
		{
			if (get_index(a, min) <= a->size / 2)
				ra(a);
			else
				rra(a);
		}
		pb(a, b);
	}
	sort_three(a);
	while (b->size > 0)
		pa(a, b);
}
