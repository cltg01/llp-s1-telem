#include <stdio.h>
#include <ctype.h>

int main(){
    char ARQentrada[30];
    char ARQsaida[30];
    char c;
    FILE *arquivoEntrada;
    FILE *arquivoSaida;

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", ARQentrada);

    printf("Digite o nome do arquivo de saida: ");
    scanf("%s", ARQsaida);

    arquivoEntrada = fopen(ARQentrada, "r");
    arquivoSaida = fopen(ARQsaida, "w");

    if (arquivoEntrada != NULL && arquivoSaida != NULL ){
        while ((c = fgetc(arquivoEntrada)) != EOF) {
            c = tolower(c);
 
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                 c = '*';
                }
        
        fprintf(arquivoSaida, "%c", c);
        }   
            fclose(arquivoEntrada);
            fclose(arquivoSaida);
            
            printf("Arquivo de saida criado com sucesso!");
        } else {
            printf("Erro ao abrir os arquivos de entrada ou saída.");
        }   
    
    return 0;
}
