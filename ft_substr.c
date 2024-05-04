#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t sub_len;
    size_t i;
    char *nuecadena;
    int comienzo;
    size_t tamaño;

    tamaño =ft_strlen(s);
    if (start > tamaño)
        return "";
    comienzo = ft_strlen(s) - start;
    i = 0;
    
    nuecadena = malloc(comienzo+ 1 );
    if (nuecadena == NULL )
        return NULL;
    sub_len = 0;
    while(s[sub_len] != '\0' && i < len && len < tamaño)
    {
        nuecadena[sub_len] = s[start];
        sub_len++;
        i++;
        start++;
    }
    nuecadena[sub_len] = '\0';
    return nuecadena;
}