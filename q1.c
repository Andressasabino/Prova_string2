#include <stdio.h>
#include <string.h>

//3. Faça um programa que receba uma string e a retorne escrita de trás pra frente.

int main()
{
  //declaração de variáveis
  char fra[200];
  int i, tam;
  
  //declaração da string
  printf("Digite uma frase: ");
  fgets(fra, 201, stdin);

  //adquirindo o tamanho da string
  tam = strlen(fra);

  // fazer a frase inverter e mostrar
  printf("Frase invertida: ");
  for(i = tam; i >= 0; i--) {
    printf("%c", fra[i]);
  }
 
  return 0;
}
