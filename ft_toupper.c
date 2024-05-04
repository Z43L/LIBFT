#include "libft.h"

int ft_toupper_l(int c)
{
    if(c >= 97 && c <= 122)
        c -= 32;
    return c;
}