/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:31:09 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/10 11:38:44 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	initialize_stacks(t_stack **a, t_stack **b)
{
	*a = init_stack();
	*b = init_stack();
	if (!*a || !*b)
	{
		if (*a)
			free_stack(*a);
		if (*b)
			free_stack(*b);
		return (0);
	}
	return (1);
}

void	fill_stack(t_stack *a, int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		push_bottom(a, ft_atoi(argv[i]));
		i++;
	}
}

void	choose_sorting_algorithm(t_stack *a, t_stack *b)
{
	if (a->size == 2)
		sort_two(a);
	else if (a->size == 3)
		sort_three(a);
	else if (a->size == 4 || a->size == 5)
		sort_five(a, b);
	else
	{
		normalize_stack(a);
		radix_sort(a, b);
	}
}
