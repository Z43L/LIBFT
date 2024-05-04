#include "libft.h"

char *strrchr(const char *s, int c)
{
    char *devolver;
    while (*s != '\0')
    {
        if(*s == c)
            devolver =  (char *)s;
        s++;
    }
    if (c == '\0')
        return (char *)s;
    return devolver;
}