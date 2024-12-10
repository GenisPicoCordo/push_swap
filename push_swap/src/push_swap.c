/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:18:15 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/09 14:45:48 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (argc < 2)
		return (0);
	if (!validate_arguments(argc, argv))
		return (1);
	if (!initialize_stacks(&a, &b))
		return (1);
	fill_stack(a, argc, argv);
	if (is_sorted(a))
	{
		free_stack(a);
		free_stack(b);
		return (0);
	}
	choose_sorting_algorithm(a, b);
	free_stack(a);
	free_stack(b);
	return (0);
}
