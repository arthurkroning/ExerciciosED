#include <stdio.h>

int main(void)
{
    int Q,cod, m=0;
    float altura, maior = 0.0 , media = 0.0;
    
    

    printf("Digite um valor Q de alunos:");
    scanf("%d",&Q);

    for (int i = 0; i < Q; i++)
    {
        printf("Digite a altura do aluno(a) e o código que representa seu sexo(1-Masculino 2-Feminino):");
        scanf("%f %d",&altura,&cod);

        switch (cod)
        {
        case 1:
            if (altura > maior)
            {
                maior = altura;
            }
            

            break;

        case 2:
            media+=altura;
            m++;
            break;
        
        default: printf("Esse código não existe");
            break;
        }
    }
        media/=m;
        printf("A altura do maior aluno é %.2f metros\nA média da altura das alunas é %.2f metros\n",maior,media);
        
    
    


    return 0;
}