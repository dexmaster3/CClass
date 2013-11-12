#include <stdio.h>
#include <string.h>

char * mystrcpy(char * new, const char * old);
int main(void)
{
    char * loz = "testing string type";
    char * naz;
    mystrcpy(naz, loz);

    printf("this is %s %s", naz, loz);
    return 0;
}
char * mystrcpy(char * new, const char * old)
{
    int count, size;
    size = strlen(old);

    for (count = 0; count <= size; count++)
    {
        new[count] = old[count];
    }
    return new;
}
