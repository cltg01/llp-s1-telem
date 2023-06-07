#include <stdio.h>
#include <ctype.h>

int main(){
  FILE *arquivo;
  char nomedoARQ[50];
  char c;
  int numeroVogais = 0;
  int numeroConsoantes = 0;

  printf("Nome do arquivo: ");
  scanf("%s", &nomedoARQ);

  arquivo = fopen(nomedoARQ, "r");
  if (arquivo != NULL){
    while ((c = fgetc(arquivo)) != EOF){
         c = tolower(c);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                 numeroVogais++;
            }
            else{ 
                numeroConsoantes++;
            }
    }
  }

    printf("O numero de vogais nesse arquivo é: %d ", numeroVogais);
    printf("\n O numero de consoantes nesse arquivo é: %d ", numeroConsoantes);
    
    return 0;
    
}
