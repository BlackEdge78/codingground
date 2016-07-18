#include <stdio.h>
int main(void)
{   
    long a;
    int i;
    int j;

  for (i=0; i<=15; i++)
    {
        a = 1;
        for (j=i; j>0; j--)
        {
                a = a * j;
        }
        printf ("les résultats sont %ld  %d\n",a,i);
    }
    return 0; 
}