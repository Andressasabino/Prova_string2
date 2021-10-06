#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    //declarando as variáveis
    char pal[30], cop[30];
    int i, tam, ig = 0;
    //recebendo a string
    printf("Digite uma palavra: ");
    scanf("%s", pal);

    //obtendo o tamanho de "pal" e copiando a palavra ao inverso
    tam = strlen(pal);
    for(i = 0; i < strlen(pal); i++){
        cop[i] = pal[tam - 1];
        tam--;
    }
    
    //colocando o final da strings e obtendo o tamanho
    cop[i] = '\0';
    tam = strlen(pal);

    printf("A palavra digitada primeiro foi: %s\n a gereada foi: %s\n", palavra, copia);
    //verificando se todos os caractéries são iguais
    for(i = 0; i < tam; i++){
        if(pal[i] == cop[i])
            ig++;
    }
    //vendo se a palavra é palíndroma ou não
    if(tam == ig)
        printf("\nÉ palíndroma...\n");
    else
        printf("\Não é palíndroma...\n");

    return 0;
}
