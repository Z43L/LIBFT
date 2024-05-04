#include "libft.h"

int ft_count_words(char const *s, char c)
{
    int i;
    int words;

    i = 0;
    words = 0;

    while(s[i])
    {
        if(s[i] != c)
        {
            words++;
            while(s[i] && s[i] != c)
                i++;
        }
        else
            i++;
    }
    return words;
}

int ft_wordlen(char const *s, char c)
{
    int i;
    int wordslen;

    wordslen = 0;
    i = 0;
    while(s[i] && s[i] != c)
    {
        wordslen++;
        i++;
    }
    return wordslen;
}

char **ft_allocate_and_fill(char const *s, char c, char **strings)
{
    int x = 0;
    int y = 0;
    int lencalloc;

    while(s[x] != '\0')
    {
        if (s[x] == c)
            x++;
        else
        {
            lencalloc = ft_wordlen(&s[x], c);
            strings[y] = ft_substr(s, x, lencalloc);
            if (!strings[y])
            {
                while (y >= 0)
                    free(strings[y--]);
                free(strings);
                return NULL;
            }
            y++;
            x += lencalloc;
        }
    }
    strings[y] = NULL;
    return strings;
}

char **ft_split(char const *s, char c)
{
    char **strings;
    int cowords;

    if (!s || !c)
        return NULL;
    cowords = ft_count_words(s, c);
    if ( cowords == 1)
    {
        strings = (char **)ft_calloc(2, sizeof(char *));
        strings[0] = ft_strtrim(s, &c);
        return strings;
    }
    strings = (char **)ft_calloc(cowords + 1, sizeof(char *));
    if (!strings)
        return NULL;

    return ft_allocate_and_fill(s, c, strings);
}
