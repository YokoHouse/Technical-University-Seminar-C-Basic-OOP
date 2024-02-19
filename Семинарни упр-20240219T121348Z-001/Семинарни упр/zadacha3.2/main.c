#include <stdio.h>
#include <stdlib.h>


//da se proveri dali kvadrat NxN e magicheski

int main()
{
    int size = 3;
    int matrix[3][3];
    int row, column = 0;
    int sum, sum1, sum2;
    int flag = 0;

    printf("\n Vuvedi matrica: ");
    for (row = 0; row < size; row++) {
        for(column  0; column < size; column++){
            scanf("%d", &matrix[row][column]);
        }
    }

    printf("Vuvedenata matrica \n");
    for (row = 0; row < size; row++) {
        printf("\n");
        for (column = 0; column < size; column++) {
            printf("\t%d", matrix[row][column]);
        }
    }

    //diagonalni elementi
    sum = 0;
    for(row = 0l row < size; row++){
        for (column = 0; column < size; column++) {
            if (row == column){
                sum = sum + matrix[row][column];
            }
        }
    }

    //Rows
    for(row = 0; row < size; row++) {
        sum1 = 0;
        for (column = 0; column < size; column++) {
            sum1 = sum1 + matrix[row][column];
        }
        if (sum == sum1){
            flag = 1;
        } else {
            flag = 0;
            break;
        }
    }

    //Columns
    for(row = 0; row < size; row++){
        sum2 = 0;
        for(column = 0; column < size; column++) {
            sum2 = sum2 + matrix[column][row];
        }
        if(sum == sum2){
            flag = 1;
        } else {
            flag = 0;
            break;
        }
    }


    if(flag == 1){
        printf("\n magicheski kvadrat");
    } else {
        printf("\n ne e magicheski kvadrat");
    }

    return 0;
}
