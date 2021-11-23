#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char s1[30], s2[30], s3[60];
    int i=0, tamanho=0, i2 = 0, i3 = 0, tamanho1, tamanho2;

    printf("Palavra 1: ");
    scanf(" %s", s1);

    printf("Palavra 2: ");
    scanf(" %s", s2);

    tamanho1 = strlen(s1);
    tamanho2 = strlen(s2);
    tamanho = tamanho1 + tamanho2;

    for (i ; i < tamanho; i++) {
      if (i % 2 == 0 && i2 < tamanho1) {
        s3[i] = s1[i2++];
      } else if (i3 >= tamanho2) {
        s3[i] = s1[i2++];
      }
      else {
        s3[i] = s2[i3++];
      }
    }

    printf("Fusão... \n palavra 3: %s\n", s3);
return 0;
}
