#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "../libft/libft.h"
#include <limits.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>

// Definimos la estructura de los nodos del stack
typedef struct s_node 
{
    int value;
    struct s_node *next;
} t_node;

// Definimos la estructura del stack
typedef struct s_stack 
{
    t_node *top;
    int size;
} t_stack;

// Prototipos de funciones (los iremos implementando después)
// Operaciones de los stacks
void    sa(t_stack *a);
void    sb(t_stack *b);
void    ss(t_stack *a, t_stack *b);
void    pa(t_stack *a, t_stack *b);
void    pb(t_stack *a, t_stack *b);
void    ra(t_stack *a);
void    rb(t_stack *b);
void    rr(t_stack *a, t_stack *b);
void    rra(t_stack *a);
void    rrb(t_stack *b);
void    rrr(t_stack *a, t_stack *b);

// Utilidades
t_stack *init_stack(void);
void    push(t_stack *stack, int value);
void push_bottom(t_stack *stack, int value);
int     pop(t_stack *stack);
void    free_stack(t_stack *stack);

// Validaciones
int is_number(const char *str);
int is_in_range(const char *str);
int has_duplicates(int argc, char **argv);
void print_error(void);
int validate_arguments(int argc, char **argv);

// Algoritmos de ordenamiento
void sort_two(t_stack *a);
void sort_three(t_stack *a);
void sort_five(t_stack *a, t_stack *b);

// Funciones utiles de ordenamiento
int find_min(t_stack *a);
int get_index(t_stack *a, int value);

#endif
