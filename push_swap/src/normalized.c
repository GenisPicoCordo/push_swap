/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalized.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:42:27 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/10 11:58:39 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	*copy_stack_to_array(t_stack *a)
{
	int		*array;
	int		i;
	t_node	*current;

	array = malloc(a->size * sizeof(int));
	if (!array)
		return (NULL);
	i = 0;
	current = a->top;
	while (current)
	{
		array[i] = current->value;
		i++;
		current = current->next;
	}
	return (array);
}

void	bubble_sort(int *array, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

void	assign_normalized_indices(t_stack *a, int *sorted_array, int size)
{
	t_node	*current;
	int		i;

	current = a->top;
	while (current)
	{
		i = 0;
		while (i < size)
		{
			if (current->value == sorted_array[i])
			{
				current->value = i;
				break ;
			}
			i++;
		}
		current = current->next;
	}
}

void	normalize_stack(t_stack *a)
{
	int	*sorted_array;
	int	size;

	size = a->size;
	sorted_array = copy_stack_to_array(a);
	if (!sorted_array)
		return ;
	bubble_sort(sorted_array, size);
	assign_normalized_indices(a, sorted_array, size);
	free(sorted_array);
}
