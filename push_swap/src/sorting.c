#include "push_swap.h"

// ordenar 2 elemntos
void sort_two(t_stack *a) 
{
    if (a->top->value > a->top->next->value)
        sa(a);
}

// ordenar 3 elementos
void sort_three(t_stack *a) 
{
    int first;
    int second;
    int third;

    first = a->top->value;
    second = a->top->next->value;
    third = a->top->next->next->value;
    if (first > second && second < third && first < third)
        sa(a); // Caso: 2 1 3 -> 1 2 3
    else if (first > second && second > third)
        sa(a), rra(a); // Caso: 3 2 1 -> 2 3 1 -> 1 2 3
    else if (first > second && first > third && second < third)
        ra(a); // Caso: 3 1 2 -> 1 2 3
    else if (first < second && first > third)
        rra(a); // Caso: 2 3 1 -> 1 2 3 
    else if (first < second && second > third)
        sa(a), ra(a); // Caso: 1 3 2 -> 3 1 2 -> 1 2 3
}

// ordenar 5 o menos elementos
void sort_five(t_stack *a, t_stack *b) 
{
    while (a->size > 3) 
    {
        // Encuentra el menor valor en el stack
        int min;

        min = find_min(a);
        // Mueve el menor valor a `b`
        while (a->top->value != min) 
        {
            if (get_index(a, min) <= a->size / 2)
                ra(a); // Rotación hacia arriba si está cerca del principio
            else
                rra(a); // Rotación hacia abajo si está cerca del final
        }
        pb(a, b); // Empuja el menor valor a `b`
    }
    // Ordena los 3 elementos restantes en `a`
    sort_three(a);
    // Devuelve los elementos de `b` a `a`
    while (b->size > 0)
        pa(a, b);
}
