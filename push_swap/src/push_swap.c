/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:18:15 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/03 16:19:40 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		i;

	if (argc < 2)
		return (0);
	if (!validate_arguments(argc, argv))
		return (1);
	a = init_stack();
	b = init_stack();
	if (!a || !b)
		return (1);
	i = 1;
	while (i < argc)
	{
		push_bottom(a, ft_atoi(argv[i]));
		i++;
	}
	if (a->size == 2)
		sort_two(a);
	else if (a->size == 3)
		sort_three(a);
	else if (a->size == 4 || a->size == 5)
		sort_five(a, b);
	else
		//
	free_stack(a);
	free_stack(b);
	return (0);
}
