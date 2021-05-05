#include <stdlib.h>
#include <stdio.h>

int main(){
    int i = 0, cont = 0, cont2 = 0;
    char *c;
    FILE *arq;

   
    arq = fopen("texto.txt", "r");
    if(arq == NULL){
        printf("\tErro ao abrir um arquivo!!");
        exit(1);
    }
    while(c != EOF){
        c = fgetc(arq);
        if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z'){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            cont++;
        }else{
            cont2++;
        }
        }
        
    }
    printf("\nVogais: %d\nConsoantes: %d\n", cont, cont2);
    fclose(arq);
    return 0;
}