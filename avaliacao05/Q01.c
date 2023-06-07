#include <stdio.h>

int main() {

  FILE *arquivo;
  arquivo = fopen("arq.txt", "w");
  char t;

  if (arquivo != NULL) {

    while (1) {
      printf("Entre com um caractere: ");  
      scanf(" %c\n", &t);
      if(t == '0'){
        break;
        printf("arquivo gravado com sucesso! \n");
      }
        fprintf(arquivo, "%c", t);
    }

    fclose(arquivo);

    printf("Arquivo gravado com sucesso!\n\n");
  }
  arquivo = fopen("arq.txt", "r");
  if (arquivo != NULL) {
    printf("Conteudo do arquivo!\n");
    while ((t = fgetc(arquivo)) != EOF) {
      printf("%c", t);
    }
  }
  fclose(arquivo);
  return 0;
}
