#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    int i = 0, cont = 0;
    char c;
    FILE *arq;
    arq = fopen("texto.txt", "rb");

    arq = fopen("texto.txt", "wb");

    

    do{
        printf("\nCaso deseje encerrar a entrada de dados digite 0");
        printf("\nDigite o caracter que deseja: ");
        scanf("%c", &c);
        fflush(stdin);
        if(c != '0'){
            fputc(c, arq);
            cont++;
        }
    }while(c != '0');

    fclose(arq);
    arq = fopen("texto.txt", "r");
    if(arq == NULL){
        printf("\tErro ao abrir o arquivo!!\n");
        exit(1);
    }
    for(i = 0; i < cont; i++){
        c = fgetc(arq);
        printf("\n%c", c);
    }
    fclose(arq);
    return 0;
}