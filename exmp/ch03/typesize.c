/* typesize.c -- prints out type sizes */
#include <stdio.h>
int main(void)
{
/*    signed long long int bvar;
    signed long long int xvar = -60000;
    printf("xvar value= %d\n", xvar);
    bvar = xvar + 270000;
    printf("bvar is now= %d\n", bvar);  */
/* c99 provides a %zd specifier for sizes */
    printf("Type int has a size of %u bytes.\n", sizeof(int));
    printf("Type short has a size of %u bytes.\n", sizeof(short));
    printf("Type long has a size of %u bytes.\n", sizeof(long));
    printf("Type float has a size of %u bytes.\n", sizeof(float));
    printf("Type double has a size of %u bytes.\n", sizeof(double));

    return 0;
}
