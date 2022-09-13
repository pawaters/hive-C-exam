#include <unistd.h>

int is_white_space(char c)
{
    return (c == ' ' || c == '\t');
}

int str_length(char *str)
{
    int	len = 0;

	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

void print_reverse(char *str)
{
    int fast;
    int slow;
    int curr;

    fast = str_length(str) - 1;
    slow = fast;
    curr = fast;

    while (fast >= 0)
    {
        //with fast, find start of word

        slow = fast;
        curr = fast;
        while (fast >= 0 && !is_white_space(str[fast]))
            fast--;
        fast++;

        //use curr to print all from fast to slow.
        curr = fast;
        while (curr <= slow)
        {
            write(1, &str[curr], 1);
            curr++;
        }


        //we wrote the word, add a whitespace, only if not last word
        if (fast > 0)
            write(1, " ", 1);
        //jump to last char of previous word:
        fast = fast - 2;
    }
}

int main(int argc, char **argv)
{
    (void)argc;
    print_reverse(argv[1]);
    return(0);
}