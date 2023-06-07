#include <stdio.h>
#include <ctype.h>

int main(){
  FILE *arquivo;
  char nomeARQ[30];
  char c;
  int numeroVogais = 0;

  printf("Nome do arquivo: ");
  scanf("%s", &nomeARQ);

  arquivo = fopen(nomeARQ, "r");
  if (arquivo != NULL){
    while ((c = fgetc(arquivo)) != EOF){
         c = tolower(c);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                 numeroVogais++;
            }
    }
    if (numeroVogais > 1){
       printf("O numero de vogais deste arquivo é %d vogais\n", numeroVogais);
        } 
        else {
                printf("Nao possui vogal");
        }
    return 0;
    }
}
