#include <stdio.h>
#include <stdlib.h>

int main(){
    char *c;
    FILE *arq, *arq2;

    arq = fopen("texto.txt", "r");
    if(arq == NULL){
        printf("\tErro ao abrir um arquivo!!");
        exit(1);
    }
    arq2 = fopen("texto2.txt", "w");
    if(arq == NULL){
        printf("\tErro ao abrir um arquivo!!");
        exit(1);
    }
    do{
        c = fgetc(arq);
        if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z'){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            c = '*';
            fputc(c, arq2);
        }else{
            fputc(c, arq2);
        }
    }else if(c != EOF){
        fputc(c, arq2);
    }
    }while(c != EOF);
    fclose(arq);
    fclose(arq2);
    return 0;
}