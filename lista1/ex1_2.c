#include <stdio.h>

void exibeOnzeTracos (void);
void retanguloTracos (void);

void exibeOnzeTracos (void)
{
    for (int i = 0; i < 11; i++)
    {
        printf("-");
    }
    printf("\n");
    

}

void retanguloTracos (void)
{
    for (int i = 0; i < 4; i++)
    {
        exibeOnzeTracos();
    }
    printf("\n");
    
}

int main(void)
{
    for (int i = 0; i < 2; i++)
    {
        retanguloTracos();
    }
    
    return 0;
}

