void *ft_memcpy(void *dest, const void *src, int n)
{
  char *d = dest;
  const char *s = src;
  int i;

  i = 0;
  while (i < n)
  {
    d[i] = s[i];
    i++;
  }
  return (dest);
}
