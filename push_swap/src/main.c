#include "push_swap.h"

int main(int argc, char **argv) {
    t_stack *a;
    int i;
    
    if (argc < 2)
        return (0);
    if (!validate_arguments(argc, argv))
        return (1);
    
    a = init_stack();
    i = 1;
    while (i < argc) {
        push(a, atoi(argv[i]));
        i++;
    }
    // Aquí implementaremos el algoritmo de ordenamiento
    free_stack(a);
    return (0);
}

