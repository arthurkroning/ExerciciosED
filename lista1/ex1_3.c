#include <stdio.h>

void exibeDivisores (int d);

void exibeDivisores (int d)
{
    int div, i;
    for (int i = 1; i <= d; i++)
    {
        div = d % i;

        if (div == 0)
        {
            printf(" %d",i);
        }


    }
    
    printf("\n");

}

int main (void)
{
    
    for (int d = 1; d <= 20; d++)
    {
        printf("%d:",d);
        exibeDivisores(d);
    }

    return 0;
    
}
