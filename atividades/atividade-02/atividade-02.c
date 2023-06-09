#include <stdio.h>
void somaMatrizes(int m, int MatrizA[][m], int MatrizB[][m], int MatrizC[][m]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
           MatrizC[i][j] = MatrizA[i][j] + MatrizB[i][j];
        }
    }
}

int main() {
    int m = 3;
    int A[][3] = { 5, 2, 10, 70, 27, 20, 77, 8, 22} ; 
    int B[][3] = {65, 21, 71, 6, 5, 4, 3, 2, 13 };
    int C[3][3]; 

   somaMatrizes (m, A, B, C);

    printf("MatrizC:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
