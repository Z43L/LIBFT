#include "libft.h"
int ft_intlen(int n)
{
    int len;

    len = 0;
    if (n == 0)
        return 1;
    if (n < 0)
    {
        len++;
    }
    while(n)
    {
        n /= 10;
        len++;
    }
    return len;
}

char *ft_initialize(int a, int len)
{
    char *resultado;
    int esNegativo = 0;

    if (a < 0)
        esNegativo = 1;
    resultado = (char*)malloc(sizeof(char)*(len + 1));
    if (resultado == NULL)
        return NULL;
    resultado[len] = '\0';
    if (a == 0)
    {
        resultado[0] = '0';
        return resultado;
    }
    if (esNegativo)
        resultado[0] = '-';
    return resultado;
}

void ft_fill(char *resultado, int a, int len)
{
    int posicion;
    int esNegativo = 0;

    if (a < 0)
        esNegativo = 1;
    while(a)
    {
        posicion = a % 10 ;
        if (esNegativo)
            posicion = -posicion;
        resultado[--len] = '0' + posicion;
        a /= 10;
    }
}

char *ft_itoa(int a)
{
    int len = ft_intlen(a);
    char *resultado = ft_initialize(a, len);
    if (resultado == NULL || resultado[0] == '0')
        return resultado;
    ft_fill(resultado, a, len);
    return resultado;
}