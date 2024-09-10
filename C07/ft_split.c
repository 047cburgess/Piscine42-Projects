#include <stdlib.h>
#include <stdio.h>

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int is_in_charset(char c, char *charset)
{
    int i;

    i = 0;
    while (charset[i])
    {
        if (c == charset[i])
        {
            return (1);
        }
        i++;
    }
    return (0);
}

int count_words(char *str, char *charset)
{
    int word_count;
    int in_word;

    word_count = 0;
    in_word = 0;
    while (*str)
    {
        if (is_in_charset(*str, charset))
        {
            in_word = 0;
        }
        else if(!is_in_charset(*str, charset) && in_word == 0)
        {
            in_word = 1;
            word_count++;
        }
        str++;
    }
    return (word_count);
}

char    *copy_word(char *str, char *charset)
{
    char    *copy;
    int len;
    int i;

    len = 0;
    while (str[len] && !is_in_charset(str[len], charset))
    {
        len++;
    }
    copy = malloc(sizeof(char) * (len + 1));
    if (!copy)
        return (NULL);
    i = 0;
    while (i < len)
    {
        copy[i] = str[i];
        i++;
    }
    copy[i] = '\0';
    return (copy);
}

char    **ft_split(char *str, char *charset)
{
    char    **array;
    int word_count;
    int i;
    int j;

    word_count = count_words(str, charset);
    array = malloc(sizeof(char*) * (word_count + 1));
    if (!array)
        return (NULL);
    i = 0;
    while (i < word_count)
    {
        while (*str && is_in_charset(*str, charset))
        {
            str++;
        }
        if (*str && !is_in_charset(*str, charset))
        {
            array[i] = copy_word(str, charset);
            if (!array[i])
            {
                j = 0;
                while (j < i)
                {
                    free(array[j]);
                    j++;
                }
                free(array);
                return (NULL);
            }
            i++;
        }
        while (*str && !is_in_charset(*str, charset))
        {
            str++;
        }
    }
    array[i] = NULL;
    return (array);
}

int main(void)
{
    char    *string = "We need to split out this string!!     Yes all of it   ";
    char    *charset = " ";
    int         count = count_words(string, charset);
    char    **array;

    array = ft_split(string, charset);
    if (!array)
    {
        printf("Mem alloc failed\n");
        return (1);
    }

    int i = 0;
    while (i < count)
    {
        printf("%s\n", array[i]);
        free(array[i]);
        i++;
    }
    free(array);
}
