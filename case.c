#include <stdio.h>
#include <string.h>

void shift(char * item);
int main(void)
{
    char phrase[40] = "Change all To CAPs letTers";

    shift(phrase);

    return 0;
}

void shift(char * item)
{
    int x;
    char new[40];
    for (x = 0; x <= strlen(item); x++)
    {
        if ((item[x] >= 97) && (item[x] <= 122))
            new[x] = item[x] - 'a' + 'A';
        else
            new[x] = item[x];
    }
    printf("New item is = %s\n", new);
}
