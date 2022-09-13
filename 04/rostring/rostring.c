#include <unistd.h>

int ft_isblank(char c)
{
    return(c == ' ' || c == '\t');
}

void rostring(char *str)
{
    int i;
    int first_word;
    
    i = 0;
    first_word = 0;
    while (str[i])
    {
        while (ft_isblank(str[i]) && str[i])
            i++;
        if (!ft_isblank(str[i]) && str[i])
        {
            if (first_word == 0)
            {
                while (!ft_isblank(str[i]) && str[i])
                {
                    first_word++;
                    i++;
                }
            }

            //print rest of string
            while (!ft_isblank(str[i]) && str[i])
            {
                write(1, &str[i], 1);
                i++;
            }
            write(1, " ", 1);
        }
    }
    //write first word

    i = 0;
    while (ft_isblank(str[i]))
        i++;
    while (first_word--)
        write(1, &str[i++], 1);
}


int main(int argc, char **argv)
{
    if (argc > 1 && *argv[1])
		rostring(argv[1]);
	write(1, "\n", 1);
	return (0);
}