#include "push_swap.h"

// swap a: intercambiar los dos primeros elementos de la pila a
void sa(t_stack *a) 
{
    t_node *first;
    t_node *second;

    if (a->size < 2) // Si hay menos de 2 elementos, no hacemos nada
        return ;
    first = a->top;           // Primer nodo
    second = first->next;     // Segundo nodo
    first->next = second->next; // Actualizamos el puntero del primer nodo
    second->next = first;     // Segundo nodo ahora apunta al primero
    a->top = second;          // Segundo nodo se convierte en el nuevo "top"
}

// swap b: intercambiar los dos primeros elementos de la pila b
void    sb(t_stack *b)
{
    t_node *first;
    t_node *second;

    if(b->size < 2)
        return ;
    first = b->top;
    second = first->next;
    first->next = second->next;
    second->next = first;
    b->top = second;
}
// intercambiar los dos primeros elementos de la pila a y b a la vez
void ss(t_stack *a, t_stack *b) {
    sa(a); // Aplica el swap en el stack a
    sb(b); // Aplica el swap en el stack b
}
// La operación pa, push a, toma el elemento en la cima del stack b y lo coloca en la cima del stack a. Si b está vacío, no hace nada.
void    pa(t_stack *a, t_stack *b)
{
    t_node *temp;

    if(b->size == 0)
        return ;
    temp = b->top;
    b->top = temp->next;
    temp->next = a->top;
    a->top = temp;
    b->size--;
    a->size++;
}
// La operación pb, push b, toma el elemento en la cima del stack a y lo coloca en la cima del stack b. Si a está vacío, no hace nada.
void    pb(t_stack *a, t_stack *b)
{
    t_node *temp;

    if(a->size == 0)
        return ;
    temp = a->top;
    a->top = temp->next;
    temp->next = b->top;
    b->top = temp;
    a->size--;
    b->size++;
}
// Rotate a: Desplaza hacia arriba todos los elementos del stack a una posición, de forma que el primer elemento se convierte en el último.
void ra(t_stack *a) {
    t_node *first;
    t_node *last;

    if (a->size < 2) // Si el stack tiene menos de 2 elementos, no hacemos nada
        return;
    first = a->top;         // Guardamos el nodo superior
    a->top = first->next;   // Actualizamos la cima al segundo nodo
    last = a->top;          // Inicializamos last para buscar el último nodo

    // Recorremos el stack para encontrar el último nodo
    while (last->next) 
    {
        last = last->next;
    }

    last->next = first;     // Enlazamos el primer nodo al final
    first->next = NULL;     // El nuevo último nodo no tiene siguiente
}
// Rotate b: Desplaza hacia arriba todos los elementos del stack a una posición, de forma que el primer elemento se convierte en el último.
void rb(t_stack *b) {
    t_node *first;
    t_node *last;

    if (b->size < 2) // Si el stack tiene menos de 2 elementos, no hacemos nada
        return;
    first = b->top;         // Guardamos el nodo superior
    b->top = first->next;   // Actualizamos la cima al segundo nodo
    last = b->top;          // Inicializamos last para buscar el último nodo

    // Recorremos el stack para encontrar el último nodo
    while (last->next) 
    {
        last = last->next;
    }

    last->next = first;     // Enlazamos el primer nodo al final
    first->next = NULL;     // El nuevo último nodo no tiene siguiente
}
// ra y rb al mismo tiempo.
void    rr(t_stack *a, t_stack *b)
{
    ra(a);
    rb(b);
}
// Reverse rotate a: Desplaza hacia abajo todos los elementos del stack a una posición, de forma que el último elemento se convierte en el primero.
void rra(t_stack *a) {
    t_node *prev;
    t_node *last;

    if (a->size < 2) // Si el stack tiene menos de 2 elementos, no hacemos nada
        return;

    last = a->top;   // Inicializamos `last` para buscar el último nodo
    prev = NULL;     // `prev` rastreará el nodo anterior a `last`

    // Recorremos el stack para encontrar el último nodo
    while (last->next) {
        prev = last;         // Actualizamos `prev` al nodo actual
        last = last->next;   // Avanzamos al siguiente nodo
    }

    // Ahora `last` es el último nodo y `prev` es el penúltimo nodo

    prev->next = NULL;  // Desconectamos el último nodo del stack
    last->next = a->top; // Conectamos el último nodo a la cima
    a->top = last;       // Actualizamos la cima para que apunte al último nodo
}
// Reverse rotate b: Desplaza hacia abajo todos los elementos del stack a una posición, de forma que el último elemento se convierte en el primero.
void rrb(t_stack *b) {
    t_node *prev;
    t_node *last;

    if (b->size < 2) // Si el stack tiene menos de 2 elementos, no hacemos nada
        return;

    last = b->top;   // Inicializamos `last` para buscar el último nodo
    prev = NULL;     // `prev` rastreará el nodo anterior a `last`

    // Recorremos el stack para encontrar el último nodo
    while (last->next) 
    {
        prev = last;         // Actualizamos `prev` al nodo actual
        last = last->next;   // Avanzamos al siguiente nodo
    }

    // Ahora `last` es el último nodo y `prev` es el penúltimo nodo

    prev->next = NULL;  // Desconectamos el último nodo del stack
    last->next = b->top; // Conectamos el último nodo a la cima
    b->top = last;       // Actualizamos la cima para que apunte al último nodo
}
// rrr rra y rrb al mismo tiempo.
void    rrr(t_stack *a, t_stack *b)
{
    rra(a);
    rrb(b);
}