#include "push_swap.h"

// Prototipo de la función de validación
int validate_arguments(int argc, char **argv);

int main(int argc, char **argv) {
    t_stack *a;
    int i;

    // Si no hay argumentos, no hacemos nada
    if (argc < 2)
        return (0);

    // Validar los argumentos
    if (!validate_arguments(argc, argv))
        return (1); // Salimos si hay un error

    // Inicializar el stack
    a = init_stack();

    // Convertir los argumentos a enteros y cargarlos en el stack
    i = 1; // Empezamos en el primer argumento
    while (i < argc) {
        push(a, atoi(argv[i]));
        i++;
    }

    // Aquí implementaremos el algoritmo de ordenamiento

    // Liberar memoria
    free_stack(a);
    return (0);
}

