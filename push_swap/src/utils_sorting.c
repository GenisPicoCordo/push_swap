/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:18:59 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/03 12:52:46 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_min(t_stack *a)
{
	t_node	*current;
	int		min;

	current = a->top;
	min = current->value;
	while (current)
	{
		if (current->value < min)
			min = current->value;
		current = current->next;
	}
	return (min);
}

int	get_index(t_stack *a, int value)
{
	t_node	*current;
	int		index;

	current = a->top;
	index = 0;
	while (current)
	{
		if (current->value == value)
			return (index);
		current = current->next;
		index++;
	}
	return (-1);
}
