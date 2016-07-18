#include <stdio.h>
int main()
{   
    int a = 0;
    int i;
    int j;

  for (j=0; j<15; j++)
    {
        a = a + 1;
        printf ("la valeur de a est %d\n",a);
        for (i=a; i<=a; i--)
        {
                printf("test\n");
                a = a * i;
                printf ("les résultats sont %d\n",a);
        }
        return 0;
    }    
}

