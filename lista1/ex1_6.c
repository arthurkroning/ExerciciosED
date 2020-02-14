#include <stdio.h>

int main(void)
{
    int L,C;

    printf("Digite um valor para L(máximo 10):");
    scanf("%d",&L);
    while (L>10 || L<0)
        {
        printf("Digite um valor para L(máximo 10):");
        scanf("%d",&L);
        }

    printf("Digite um valor para C(máximo 10):");
    scanf("%d",&C);
    while (C>10 || C<0)
        {
        printf("Digite um valor para C(máximo 10):");
        scanf("%d",&C);
        }

int M[L][C],v,f=0;

    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printf("Informe um valor para a linha %d coluna %d:",i,j);
            scanf("%d",&M[i][j]);
        }
        
    }

    printf("Informe um valor a ser buscado na Matriz:");
    scanf("%d",&v);

    while (v>0)
    {
        
        for (int i = 0; i < L; i++)
        {
            for (int j = 0; j < C; j++)
            {
                if (v==M[i][j])
                {
                    f=9;
                }
                
            }
        
        }

        if (f==9)
        {
            printf("Está na matriz\n");
        }
        else
        {
            printf("Não está na matriz\n");
        }
        
        f=0;
        printf("Informe um valor a ser buscado na Matriz:");
        scanf("%d",&v);
        
    }
    
    
    
}