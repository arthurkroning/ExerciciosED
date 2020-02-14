#include <stdio.h>

int maiorNumero (int a , int b);

int maiorNumero (int a , int b)
{
    int M;

    if(a > b)
    {
        M=a;
        return M; 
    }
    else
    {
        if(a < b)
        {
            M=b;
            return M; 
        }
        else
        {
            M=-1;
            return M;
        }
        
    }
    
}

int main(void)
{
    int N,a,b,maior;

    printf("Digite o valor de N:");
    scanf("%d",&N);

    for (int i = 0; i < N; i++)
    {
        printf("Digite um valor para A e um valor para B:");
        scanf("%d %d",&a,&b);

        maior= maiorNumero(a,b);

        if (maior>=0)
        {
            printf("%d\n",maior);
        }
        else
        {
            printf("Eles são iguais\n");
        }
        
        
    }
    

    return 0;
}
