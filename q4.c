#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    fflush(stdin);

    //declarando variáveis
    char string[20], nova_string[20];
    int i = 0, cont = 0, tamanho = 0;

    //inserindo uma palavra
    printf("Coloque uma frase: ");
    fgets(string, 21, stdin);

    //recebendo o tamanho da string
    tamanho = strlen(string);

    //percorrendo e trocando as letras
    for(i = 0; i < tamanho; i++) {
        if (((int) string[i] >= 97) && ((int) string[i] <= 122)) {
            nova_string[i] = ((char) (((int) string[i] - 32)));
        } else if (((int) string[i] >= 65) && ((int) string[i] <= 90)) {
            nova_string[i] = ((char) (((int) string[i] + 32)));
        }
    }

    //nova palavra
    printf("%s\n", nova_string);
return 0;
}
