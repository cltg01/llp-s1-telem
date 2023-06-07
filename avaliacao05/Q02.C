#include <stdio.h>

int main(){
  FILE *arquivo;
  char nomeDOARQ[50];
  char t;
  int numeroLinhas = 0;

  printf("Nome do arquivo: ");
  scanf("%s", &nomeDOARQ);

  arquivo = fopen(nomeDOARQ, "r");
  if (arquivo != NULL){
    while ((t = fgetc(arquivo)) != EOF){
      if (t == '\n'){
        numeroLinhas++;
      }
    }
  }
  fclose(arquivo);

  printf("O arquivo possui %d linhas.\n", numeroLinhas);
  return 0;
}
