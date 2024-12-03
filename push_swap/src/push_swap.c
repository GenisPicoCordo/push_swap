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

	a = init_stack();
	b = init_stack();
	i = 1;

	if (argc < 2)
		return (0);
	if (!validate_arguments(argc, argv))
	{
		write(2, "Error\n", 6);
		return (1);
	}

	while (i < argc)
	{
		push_bottom(a, ft_atoi(argv[i]));
		i++;
	}

	sort_five(a, b);

	free_stack(a);
	free_stack(b);

	return (0);
}

/*
#include "push_swap.h"
#include <stdio.h>

int main() {
    t_stack *a = init_stack();
    t_stack *b = init_stack();

    // Agregar elementos desordenados
    push_bottom(a, 3);
    push_bottom(a, 1);
    push_bottom(a, 4);
    push_bottom(a, 5);
    push_bottom(a, 2);

    printf("Antes de sort_five:\n");
    t_node *current = a->top;
    while (current) {
        printf("%d\n", current->value);
        current = current->next;
    }

    sort_five(a, b);

    printf("Después de sort_five:\n");
    current = a->top;
    while (current) {
        printf("%d\n", current->value);
        current = current->next;
    }

    free_stack(a);
    free_stack(b);
    return (0);
}
*/
