#include <stdlib.h>
#include <stdio.h>

int main(){
    FILE *arq;
    FILE *arq2;
    char c;
    arq = fopen("texto.txt", "r");//abrindo arquivo para leitura

    if(arq == NULL){//verificando se ocorreu tudo certo ao abrir o arquivo
        printf("Erro ao tentar abrir arquivo!!\n");
    }
    arq2 = fopen("texto2.txt", "w");//abrindo o arquivo para escrita

    if(arq2 == NULL){//verificando se foi feita a abertura do arquivo corretamente, caso não tenha sido aberto irá mostrar um aviso de erro
        printf("Erro ao tentar abrir arquivo!!\n");
    }
    while(c != EOF){//criando condição para poder gravar somente os caracteres no novo arquivo criado para escrita
        c = fgetc(arq);//função para receber o caracter para a verificação
         if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z'){//condição para poder gravar o caracter no novo arquivo
             fputc(c, arq2);//gravando o caracter no novo arquivo
         }
    }
    fclose(arq);//fechando o arquivo aberto para leitura
    fclose(arq2);//fechando o arquivo aberto para escrita

    return 0;
}