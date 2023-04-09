#include <stdio.h>

int main(){ 
  //determinando as matrizes
  int matriz1[3][3] =  { 32, 61, 30, 22, 33, 44, 24, 77, 21}, matriz2[3][3] = {11, 10, 15, 14, 16, 17, 18, 19, 20}, matriz3[3][3] ;
int i, j; 
  //imprimir a matriz 1
  printf("\nMatriz1:\n");
   for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
  printf("%d\t", matriz1[i][j]);
    }
    printf("\n");
   }
  //imprimir a matriz 2
  printf("Matriz 2:\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
  printf("%d\t ", matriz2[i][j]);
    }
    printf("\n");
  }
  //imprimir a diagonal principal da matriz 1
  printf("Diagonal principal da Matriz1:\n");
  printf("%d, ", matriz1[0][0]);
  printf("%d, ", matriz1[1][1]);
  printf("%d ", matriz1[2][2]);
  printf("\n");
  printf("Soma das matrizes 1 e 2:\n");
  //soma das matrizes 1 e 2
   for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
  printf("%d\t", matriz3[i][j]);
    }
  printf("\n");
   }
 return 0;
}