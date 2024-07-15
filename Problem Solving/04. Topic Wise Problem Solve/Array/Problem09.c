// Write a C program to find sum of two matrix of order 2*2 using multidimensional arrays where, elements of matrix are entered by user. 

#include<stdio.h>
int main(){
    int matrix_1[2][2], matrix_2 [2][2], sum_matrix[2][2];
    int i,j;

    printf("Enter the elements of 1st matrix: \n");

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Enter a%d%d: ", i+1, j+1);
            scanf("%d", &matrix_1[i][j]);
        }
    }
    printf("\n");

    // for(i=0;i<2;i++){
    //     for(j=0;j<2;j++){
    //         printf("%d ", matrix_1[i][j]);
    //     }
    //     printf("\n");
    // }

    printf("\nEnter the elements of 2nd matrix: \n");

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Enter b%d%d: ", i+1, j+1);
            scanf("%d", &matrix_2[i][j]);
        }
    }

    // for(i=0;i<2;i++){
    //     for(j=0;j<2;j++){
    //         printf("%d ", matrix_2[i][j]);
    //         printf("\n");
    //     }
    // }

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            sum_matrix[i][j] = matrix_1[i][j] + matrix_2[i][j];
        }
    }

    printf("\nSum Of Matrix:\n");

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ", sum_matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}