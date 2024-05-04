#include "libft.h"


char *ft_strtrim(char const *s1, char const *set)
{
    int start;
    int end;
    char *strim;

    start = 0;
    while (s1[start] && ft_strchr(set, s1[start]))
        start++;
    end = ft_strlen(s1);
    while (end > start && ft_strchr(set, s1[end - 1]))
        end--;
    strim = (char *)malloc(sizeof(char) * (end - start +1));
    if (!strim)
        return NULL;
    ft_strlcpy(strim, &s1[start], end + 1 - start);
    strim[end - start] = '\0';
    return strim;
}