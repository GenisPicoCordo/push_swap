#include "push_swap.h"

int find_min(t_stack *a) 
{
    t_node *current;
    int min;

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

int get_index(t_stack *a, int value) 
{
    t_node *current;
    int index;

    current = a->top;
    index = 0;
    while (current) 
    {
        if (current->value == value)
            return (index); // Devuelve el índice si encuentra el valor
        current = current->next;
        index++;
    }
    return (-1); // Si no se encuentra (no debería pasar)
}
