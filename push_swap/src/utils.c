#include "push_swap.h"

t_stack *init_stack(void) 
{
    t_stack *stack;
    
    stack = (t_stack *)malloc(sizeof(t_stack));
    if (!stack)
        return (NULL);
    stack->top = NULL;
    stack->size = 0;
    return (stack);
}

// Agrega un elemento al stack, uno encima de otro
void push(t_stack *stack, int value) 
{
    t_node *new_node;
    
    new_node = (t_node *)malloc(sizeof(t_node));
    if (!new_node)
        return;
    new_node->value = value;
    new_node->next = stack->top;
    stack->top = new_node;
    stack->size++;
}
// Agregar un elemento al stack poniendolo siempre al final
void push_bottom(t_stack *stack, int value) 
{
    t_node *new_node;
    t_node *current;

    new node = malloc(sizeof(t_node));
    if (!new_node)
        return;
    new_node->value = value;
    new_node->next = NULL;
    if (stack->top == NULL) 
        stack->top = new_node; // Si el stack está vacío, el nuevo nodo es la cima 
    else 
    {
        current = stack->top;
        while (current->next) // Recorre hasta el último nodo
            current = current->next;
        current->next = new_node; // Inserta el nuevo nodo al final
    }
    stack->size++;
}

// Elimina el elemento superior del stack
int pop(t_stack *stack) 
{
    int value;
    t_node *temp;

    if (stack->size == 0)
        return (0);
    temp = stack->top;
    value = temp->value;
    stack->top = temp->next;
    free(temp);
    stack->size--;
    return (value);
}

void free_stack(t_stack *stack) 
{
    while (stack->size > 0) 
    {
        pop(stack);
    }
    free(stack);
}
