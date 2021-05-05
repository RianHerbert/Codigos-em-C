#include <stdio.h>
#include <stdlib.h>

int main(){
    int X, Z,*pz, i = 0, soma = 0, result = 0;
    //Criando um condição para que só pare quando o numero armazenado em Z for maior do que o numero armazenado em X
    pz = (int *) malloc(sizeof(int));
   //entrando com o valor de x
    printf("Digite o valor para X: ");
    scanf("%d", &X);
    //ENTRANDO COM O VALOR PARA Z
    printf("\nDigite o valor para Z: ");
    scanf("%d", &Z);
    if(Z < X){
        pz[i] = Z;
        i++;
        while(Z < X){
            pz = (int *) realloc(pz,sizeof(int));//realocando um espaço no vetor para armazenar os valores de Z enquanto não for maior que X
            printf("\nDigite o valor para Z novamente: ");
            scanf("%d", &Z);
            pz[i] = Z;
            i++;
        }
    }
    soma = X;
    int j = 0;
    i = 0;
    while(soma < Z){
        soma = soma + pz[j];
        if(soma < Z){
            result = soma;
        }
    }
    
    return 0;
}