#include <stdio.h>
void strcpyarray(char final[], char source[]);
int main(void)
{
    char name1[10] = "my name";
    char place1[10];
    
    strcpyarray(place1, name1);
    printf("place1= %s\n", place1);
    return 0;
}
void strcpyarray(char final[], char source[])
{
    int num;
    
    for (num = 0; source[num] != 0; num++)
    {
        final[num] = source[num];
    }
}
