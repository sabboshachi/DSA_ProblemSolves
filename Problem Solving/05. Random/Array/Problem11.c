//  Write a C program to find the transpose of a matrix.

#include<stdio.h>
int main(){
    int mtx1[3][3] = {{1,2,3},{4,5,6},{7,8,9}},mtx2[3][3];
    int i,j;

    printf("Original Matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", mtx1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            mtx2[i][j] = mtx1[j][i];
        }
    }
    printf("Transpose Matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", mtx2[i][j]);
        }
        printf("\n");
    }

    return 0;
}