#include <stdio.h>
#include <string.h>
// changes the phrase to caps or noncaps depending on first letter
void shift(char * item);
int main(void)
{
    char phrase[40] = "change all To CAPs letTers";

    shift(phrase);

    return 0;
}

void shift(char * item)
{
    int x;
    char new[40];
    if ((item[0] >= 97) && (item[0] <= 122))
    {
        for (x = 0; x <= strlen(item); x++)
        {
            if ((item[x] >= 65) && (item[x] <= 90))
                new[x] = item[x] - 'A' + 'a';
            else
                new[x] = item[x];
        }
    }
    else if ((item[0] >= 65) && (item[0] <= 90))
    {
        for (x = 0; x <= strlen(item); x++)
        {
            if ((item[x] >= 97) && (item[x] <= 122))
                new[x] = item[x] - 'a' + 'A';
            else
                new[x] = item[x];
        }
    }
    printf("New item is = %s\n", new);
}
