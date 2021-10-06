#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
// declarando variaveis
    char pal[30], cop[30];
    int i, tam, ig = 0;
//recebendo a string
    printf("Digite uma palavra: ");
    scanf("%s", pal);

//recebendo o tamanho e copiando o inverso da palavra
    tam = strlen(pal);
    for(i = 0; i < strlen(pal); i++){
        cop[i] = pal[tam - 1];
        tam--;
    }
    cop[i] = '\0';
    tam = strlen(pal);
//mostrando as palavras
    printf("A palavra digitada primeiro foi: %s\n a gereada foi: %s\n", pal, cop);
//comparando pal com cop para ver se são iguais
    for(i = 0; i < tam; i++){
        if(pal[i] == cop[i])
            ig++;
    }
//se são palíndromas ou não
    if(tam == ig)
        printf("\nÉ palíndroma...\n");
    else
        printf("\n Não é palíndroma...\n");

    return 0;
}
