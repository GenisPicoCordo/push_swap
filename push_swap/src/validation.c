#include "push_swap.h"

int is_number(const char *str) 
{
    int i;
    
    i = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;
    if (!str[i])
        return (0);
    while (str[i]) {
        if (!ft_isdigit(str[i]))
            return (0);
        i++;
    }
    return (1);
}

int is_in_range(const char *str) 
{
    long num;
    
    num = ft_atol(str);
    return (num >= INT_MIN && num <= INT_MAX);
}

int has_duplicates(int argc, char **argv)
{
    int i;
    
    i = 1;
    while (i < argc) 
    {
        int j = i + 1;
        while (j < argc) 
        {
            if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}

void print_error(void) 
{
    write(2, "Error\n", 6);
}

int validate_arguments(int argc, char **argv) 
{
    int i;
    
    i = 1;
    while (i < argc) 
    {
        if (!is_number(argv[i]) || !is_in_range(argv[i])) 
        {
            print_error();
            return (0);
        }
        i++;
    }

    if (has_duplicates(argc, argv)) 
    {
        print_error();
        return (0);
    }
    return (1);
}
