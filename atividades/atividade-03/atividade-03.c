#include <stdio.h>

struct Dados {
    char nome[100];
    char cidade[40]; 
    char time[50];
    int idade;
};

int main() {
  struct Dados dados; 
  
    printf("Qual o seu nome?:");
    scanf(" %[^\n]", dados.nome);

    printf("Qual a cidade que voce nasceu?:");
    scanf(" %[^\n]", dados.cidade);

    printf("Qual o seu time do coracao?:");
    scanf(" %[^\n]", dados.time);

	printf("Qual a sua idade:");
	scanf("%d", &dados.idade);
    
  FILE *arquivo = fopen("pesquisa.txt", "w");

  if (arquivo == NULL) {
    printf("Erro ao abrir o arquivo!");
  return 1;
  }
  
  fprintf(arquivo, "Nome: %s\n", dados.nome);
  fprintf(arquivo, "Estado: %s\n", dados.cidade);
  fprintf(arquivo, "Time: %s\n", dados.time);
  fprintf(arquivo, "Idade: %d\n", dados.idade);
   
  fclose(arquivo);

  printf("Estrutura gravada com sucesso no arquivo pesquisa.txt.\n");
  return 0;
}
