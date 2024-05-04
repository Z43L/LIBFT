#include "libft.h"
char *ft_strdup(const char *string)
{
    char *duplicada;
    size_t i;
    size_t len;

    len = ft_strlen(string) + 1;
    duplicada = malloc(len);
    if (duplicada == NULL)
        return NULL;
    i = 0;
    while(string[i] != '\0')
    {
        duplicada[i] = string[i];
        i++;
    }
    duplicada[i] = '\0';
    return duplicada;
}
