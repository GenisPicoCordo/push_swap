#include "push_swap.h"

int main(int argc, char **argv) 
{

    t_stack *a;
    int i;

    a = init_stack();
    i = 1;
    if (argc < 2)
        return (0);
    if (!validate_arguments(argc, argv))
        return (1);
    while (i < argc)
    {
        push(a, ft_atoi(argv[i]));
        i++;
    }

    // Aquí implementaremos el algoritmo de ordenamiento

    free_stack(a);
    return (0);
}
