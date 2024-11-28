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
