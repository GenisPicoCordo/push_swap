/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:41:47 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/10 12:07:12 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <limits.h>
# include <stdlib.h>
# include <ctype.h>
# include <unistd.h>

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*top;
	int		size;
}	t_stack;

// Stack operations
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);

// Utilities
t_stack	*init_stack(void);
void	push_bottom(t_stack *stack, int value);
int		pop(t_stack *stack);
void	free_stack(t_stack *stack);

// Validations
int		is_number(const char *str);
int		is_in_range(const char *str);
int		has_duplicates(int argc, char **argv);
void	print_error(void);
int		validate_arguments(int argc, char **argv);
int		is_sorted(t_stack *stack);

// Sorting algorithms
void	sort_two(t_stack *a);
void	sort_three(t_stack *a);
void	sort_five(t_stack *a, t_stack *b);
void	radix_sort(t_stack *a, t_stack *b);

// Sorting utilities functions
int		find_min(t_stack *a);
int		get_index(t_stack *a, int value);

// Radix utilities functions
int		find_max(t_stack *a);
int		calculate_bits(int max_num);

// Main utils
int		initialize_stacks(t_stack **a, t_stack **b);
void	fill_stack(t_stack *a, int argc, char **argv);
void	choose_sorting_algorithm(t_stack *a, t_stack *b);

// Normalized utils
int		*copy_stack_to_array(t_stack *a);
void	bubble_sort(int *array, int size);
void	assign_normalized_indices(t_stack *a, int *sorted_array, int size);
void	normalize_stack(t_stack *a);

#endif
