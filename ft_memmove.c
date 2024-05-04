#include "libft.h"
void *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t i;
    unsigned char *pdst;
    const unsigned char *psrc;

    pdst = (unsigned char *)dst;
    psrc = (const unsigned char *)src;
    i = 0;
    if (psrc < pdst && pdst < psrc + len)
    {
        i = len;
        while(i-- != 0)
        {
            pdst[i] = psrc[i];

        }
    }
    else
    {
        while(i < len)
        {
            pdst[i] = psrc[i];
            i++;
        }
    }
    

    return (void*)pdst;
}