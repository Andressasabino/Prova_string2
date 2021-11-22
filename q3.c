#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    fflush(stdin);
    
    //declarando variáveis
    char frase[200];
    int i = 0, cont = 0, tamanho = 0;

    //inserindo a frase
    printf("Coloque uma frase: ");
    fgets(frase, 201, stdin);

    //determinando o tamanho da frase
    tamanho = strlen(frase);

    //percorrendo a frase e verirficando as letras
    for(i = 0; i < tamanho; i++) {
        if (((int) frase[i] <= 90) && ((int) frase[i] >= 65)) {
            cont++;
        }
      
    }
    //condicionando e mostrando o resultado 
    if (cont > 0){
printf("\n Número de letras maiúsculas: %d\n\n", cont);
   }
else{
  printf("\n Não há maiúsculas\n");
        }
  
return 0;
}
