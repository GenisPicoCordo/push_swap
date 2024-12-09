/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 14:46:51 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/09 15:47:47 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_max(t_stack *a)
{
	t_node	*current;
	int		max;

	if (!a || !a->top)
		return (0);
	current = a->top;
	max = current->value;
	while (current)
	{
		if (current->value > max)
			max = current->value;
		current = current->next;
	}
	return (max);
}

int	calculate_bits(int max_num)
{
	int				bits;
	unsigned int	abs_num;

	bits = 0;
	if (max_num < 0)
		abs_num = -max_num;
	else
		abs_num = max_num;
	while ((max_num >> bits) != 0)
		bits++;
	return (bits);
}
