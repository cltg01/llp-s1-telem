#include <stdio.h>

int main() {

  FILE *arquivo;
  arquivo = fopen("arq.txt", "w");
  char T;

  if (arquivo != NULL) {

    while (1) {
      printf("Entre com um caractere: ");  
      scanf(" %c\n", &T);
      if(T == '0'){
        break;
        printf("arquivo gravado com sucesso! \n");
      }
        fprintf(arquivo, "%c", T);
    }

    fclose(arquivo);

    printf("Arquivo gravado com sucesso!\n\n");
  }
  arquivo = fopen("arq.txt", "r");
  if (arquivo != NULL) {
    printf("Conteudo do arquivo!\n");
    while ((T = fgetc(arquivo)) != EOF) {
      printf("%c", T);
    }
  }
  fclose(arquivo);
  return 0;
}
