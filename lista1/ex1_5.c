#include <stdio.h>

int main(void)
{
    int Q;

    printf("Digite um valor para Q(máximo 10):");
    scanf("%d",&Q);
    
    while (Q>10 || Q<0)
    {
        printf("Digite um valor para Q(máximo 10):");
        scanf("%d",&Q);
    }
    

    int Z[Q],W[Q],Y,c=0;
    
    for (int i = 0; i < Q; i++)
    {
        printf("Digite um valor para a posição %d do vetor Z:",i);
        scanf("%d",&Z[i]);
    }
    
    printf("Digite um valor para Y:");
    scanf("%d",&Y);

    for (int i = 0; i < Q; i++)
    {
        if (Z[i]>Y)
        {
            W[c]=Z[i];
            c++;
        }
        
    }

    for (int i = 0; i < c; i++)
    {
        printf("%d ",W[i]);
    }
    printf("\n");
    
    
    
    return 0;
}