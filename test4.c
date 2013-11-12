#include <stdio.h>
char * strcpy(char * s1, const char * s2);
int main(void)
{
    char name1[10] = "my name";
    char place1[10];
    
    strcpy(place1, name1);
    printf("place1= %s\n", place1);
    return 0;
}
char * strcpy(char * s1, const char * s2)
{ 
    char * hold = s1;
    while (*s2)
    {
        *s1++ = *s2++;
    }
    *s1 = 0;
    return hold;
}
