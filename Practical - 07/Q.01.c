#include <stdio.h>

int main() {
    int matrixA[3][3];
    int matrixB[3][3];
    int sum[3][3];


    printf("Enter values for Matrix A (3x3):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }


    printf("Enter values for Matrix B (3x3):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }


    printf("Matrix Sum:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
