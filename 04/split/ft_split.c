#include <stdlib.h>

int			ft_isspace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char *malloc_word(char *str)
{
    char *ret;
    int i;

    i = 0;
    ret = malloc(sizeof(char) * 1000);
    while (str[i] && !ft_isspace(str[i]))
    {
        ret[i] = str[i];
        i++;
    }
    ret[i] = '\0';
    return(ret);
}

char **ft_split(char *str)
{
    
    int i;
    char **ret;

    i = 0;
    ret = malloc(sizeof(char*) * 100);
    while(*str)
    {
        while(*str && ft_isspace(*str))
            str++;
        if (*str && !ft_isspace(*str))
        {
            ret[i] = malloc_word(str);
            i++;
            while (*str && !ft_isspace(*str))
                str++;
        }
    }
    ret[i] = NULL;
    return(ret);
}

#include <stdio.h>

int	main(void)
{
	char **arr;

	char *phrase = "   Hello,   test\t woo!  ";
	arr = ft_split(phrase);
    printf("%s", arr[0]);

    return(0);
}