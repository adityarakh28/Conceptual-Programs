#include <stdio.h>
int main()
{
     char ch = 'A';
     char *cptr = &ch;

    int i = 11;
    int *iptr = &i;

    float f = 90.99f;
    float *fptr = &f;


    double d = 78.67890;
    double *dptr = &d;

    printf("%c\n",*cptr);
    printf("%c\n",*iptr);
    printf("%c\n",*fptr);
    printf("%c\n",*dptr);

   
    return 0;



}
    