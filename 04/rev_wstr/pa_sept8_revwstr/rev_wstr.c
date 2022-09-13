
ft_split(char* str)
{
    int     i;
    int     j;
    int     k;
    char    **ret;
    
    i = 0;
    j = 0;
    k = 0;
    //got to start of the word
    ret = malloc(sizeof(char*) * 1000);
    while (str[i] == ' ' || str[i] == '\t' || str[i] != '\0')
        i++;
    //save each word in a ret[i]
    while (str[i] != '\0')
    {
        ret[j] = malloc(1000);
        k = 0;
        while(str[i] != ' ' || str[i] != '\t')
        {
            ret[j][k] = str[i];
            i++;
            k++;
        }
        j++;
    }
    //careful: what happens if space at start, or at end, or if only one word
}

int main(int argc, char** argv)
{
    ft_split(argv[1]);

    write(1, '\n', 1);
    
    return (0);    
}