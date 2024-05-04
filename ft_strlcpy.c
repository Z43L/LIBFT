#include "libft.h"

size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t ret = strlen(src);
	size_t i;
	char *cpy;
	char *nocpy;

	if (dstsize == 0)
		return (ret);
	cpy = dst;
	nocpy = (char *)src;
	i = 0;
	while (i < dstsize - 1 && nocpy[i] != '\0')
	{
		cpy[i] = nocpy[i];
		i++;
	}
	cpy[i] = '\0';
	return (ret);
}

