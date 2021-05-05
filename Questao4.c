#include <stdio.h>
#include <stdlib.h>

typedef struct{//estrutura ou registro chamado para poder guardar os dados dos candidatos que iram ser entrados
    char nome[50];
    int poder;
    int qdm;
    int morreu;
}inserir;


int main(){
    int a, i = 0, cont = 0, j = 0;
    char *name;
    inserir *vet;//chamando a estrutura para dentro da função
    vet = (int *) malloc(sizeof(int));//criando um vetor utilizando alocação dinamica
    name = (char *) malloc(sizeof(char));//criando vetor utilizando alocação dinamica

    do{//função chamada para a entrada de dados dos candidatos
        printf("\nDigite o nome do candidato? ");
        gets(vet[i].nome);
        fflush(stdin);
        printf("\nQual o nivel de poder do candidato?\n1- Alto\n2- Medio\n3- Baixo\n");
        scanf("%d", &vet[i].poder);
        fflush(stdin);
        printf("\nQuantos deuses o candidato já matou? ");
        scanf("%d", &vet[i].qdm);
        fflush(stdin);
        printf("\nQuantas mortes este candidato tem? ");
        scanf("%d", &vet[i].morreu);
        fflush(stdin);
        i++;
        vet = (int *) realloc(vet, sizeof(int));//realocando uma posição no vetor para poder armazenar os dados de outro candidato na estrutura ou registro
        printf("1 - Inserir novo Candidato\n2 - Encerrar inclusão de candidatos\n");
        scanf("%d", &a);
        fflush(stdin);
    }while(a != 2);
    int b = i;
    for(i = 0; i < b; i++){//função utilizada para identificar se tem mais de um candidato com nivel de poder repetido
        if(vet[i].poder == 1){
                name = vet[i].nome;
            cont++;
        }   
    }
    if(cont == 1){//caso só tenha um candidato poderoso está condição já irá mostrá-lo
            printf("O novo godofor é: %s\n", name);
            return 0;
        }
    //essa parte do programa será somente executada caso a condição anterior seja invalida
    for(i = 1; i < b; i++){//condição chamada para fazer as validações necessárias para decidir qual o novo godofor
       if(vet[i-1].poder > vet[i].poder){
           name = vet[i].nome;
       }else if(vet[i-1].poder > vet[i].poder){
           name = vet[i-1].nome;
       }else if(vet[i-1].qdm > vet[i].qdm){
           name = vet[i-1].nome;
       }else if(vet[i-1].qdm < vet[i].qdm){
           name = vet[i].nome;
       }else if(vet[i-1].morreu < vet[i].morreu){
           name = vet[i-1].nome;
       }else if(vet[i-1].morreu > vet[i].morreu){
           name = vet[i].nome;
       }else if(vet[i-1].nome > vet[i].nome){
           name = vet[i].nome;
       }else{
           name = vet[i-1].nome;
       }
    }
    printf("O novo godofor é: %s\n", name);
    return 0;
}