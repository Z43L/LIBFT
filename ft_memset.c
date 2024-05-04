#include  "libft.h"

char *ft_memset(void *dst, int c, size_t n)
{
/*   unsigned char *p = dst;
  while (n--)
  {
    p++;
    *p = (unsigned char) c;
  }
  return dst; */
  int i;
  unsigned char *p;

  p = dst;
  i = 0;

  while(n > 0)
  {
    p[i] = (unsigned char) c;
    i++;
    n--;
  }
  return dst;
}

