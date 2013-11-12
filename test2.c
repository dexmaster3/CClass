#include <stdio.h>
#include <string.h>
#define QUOTE "hopefully this will help!"
int main(void)
{
    int x = 0;
    char first[20];
    char last[20];

    printf("/%10.5s/ ", QUOTE);
    printf("The answer is %10.1f ",1.2345);
    x = 3 * 6 / 4;
    printf("%d\n",x);
    x = strlen("test string");
    printf("%d\n",x);
    printf("HERE  x = %010d \n",43);
    printf("%c\n", '\x4d');
    scanf("%s %s", first, last);
    printf("%s = first, %s = last", first, last);


    return 0;
}
