#include <stdio.h>
#include <ctype.h>

int main(){

    FILE *arquivo;
    char c; 
    char cConsulta;
    char nomeARQ[30];
    int numC = 0;
    
printf("Entre com um caractere para fazer a consulta: ");
scanf("%c", &cConsulta);

printf("Digite o nome do arquivo de texto: ");
scanf("%s", &nomeARQ);

arquivo = fopen(nomeARQ, "r");
if (arquivo != NULL){
    while ( (c = fgetc(arquivo)) != EOF){

    c = tolower(c);
    
    if (c >= 'a' && c <= 'z' || c >= '0' && c){
         if (c == cConsulta) {
                 numC++;
            }
    }
    }
}

printf("A letra (%c) aparece (%d) vezes. ",cConsulta, numC);

    return 0;
}
