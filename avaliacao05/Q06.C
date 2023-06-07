#include <stdio.h>
#include <ctype.h>

void contarAlfabeto(char *nomeARQ, int *vezes){
    FILE *arquivo;
    char c;

    arquivo = fopen(nomeARQ, "r");
    if (arquivo != NULL) {
        while((c = fgetc(arquivo)) != EOF){
            c = tolower(c);
            if (c >= 'a' && c <= 'z'){
                vezes[c - 'a']++;
            }
        }
    }
    fclose(arquivo);
}
int main(){
    char nomeARQ[30];
    int vezes[26] = {0};

    printf("Entre com o nome do arquivo: ");
    scanf("%s", nomeARQ);

    contarAlfabeto(nomeARQ, vezes);

    printf("A seguir a quantidade de vezes que cada letra do arquivo se repete:\n");
    for (int i = 0; i < 26; i++){
        char letra = 'A' + i;
        printf("%c: %d\n", letra, vezes[i]);
    }
    return 0;

}
