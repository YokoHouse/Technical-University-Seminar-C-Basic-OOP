#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix[4][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12},
    {13, 14, 15, 16}
    };

    int i, j;

    printf("Main diagonal: ");
    for (i=0; i < N; i++) {
        printf("%d", matrix[i][i])
    }
    printf("\n");

    printf("Vtorostepenen diagonal:");
    for(i=0; i < N; i++) {
        printf("%d", matrix[i][N-i-1]);
    }
    printf("\n");

    printf("Elementi pod main diagonal: ");
    for (i=1; i < N; i++){
        for(j = 0; j < 1; j++){
            printf("%d", matrix[i][j]);
        }
    }


    printf("Elementi nad main diagonal:");
    for (i = 0; i < N-1; i++){
        for(j = i+1; j < N; j++){
            printf("%d", matrix[i][j]);
        }
    }

    return 0;

}
