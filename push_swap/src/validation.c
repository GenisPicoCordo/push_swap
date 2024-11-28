#include "push_swap.h"

// Verifica si una cadena es un número válido
int is_number(const char *str) {
    int i;
    
    i = 0;
    if (str[i] == '-' || str[i] == '+') // Manejar signos
        i++;
    if (!str[i]) // Si solo hay un signo, no es válido
        return (0);
    while (str[i]) {
        if (!ft_isdigit(str[i]))
            return (0); // No es un número válido
        i++;
    }
    return (1);
}

// Verifica si el número está dentro del rango de los enteros
int is_in_range(const char *str) {
    long num = ft_atol(str); // Usa atol para manejar números grandes
    return (num >= INT_MIN && num <= INT_MAX);
}

// Verifica si hay números duplicados en los argumentos
int has_duplicates(int argc, char **argv) {
    int i = 1;
    while (i < argc) {
        int j = i + 1;
        while (j < argc) {
            if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
                return (1); // Hay duplicados
            j++;
        }
        i++;
    }
    return (0); // No hay duplicados
}

// Imprime "Error\n" y termina el programa
void print_error(void) {
    write(2, "Error\n", 6); // Salida estándar de errores
}

// Función principal de validación
int validate_arguments(int argc, char **argv) {
    int i = 1;

    while (i < argc) {
        if (!is_number(argv[i]) || !is_in_range(argv[i])) {
            print_error();
            return (0); // Error detectado
        }
        i++;
    }

    if (has_duplicates(argc, argv)) {
        print_error();
        return (0); // Error detectado
    }

    return (1);
}
