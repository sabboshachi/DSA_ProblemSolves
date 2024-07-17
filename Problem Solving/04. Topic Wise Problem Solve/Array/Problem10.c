// Write a C program to draw a multiplication table using two dimensional array. 

#include<stdio.h>
int main(){
    int mtx1[2][2] = {{1,2},{1,2}};
    int mtx2[2][2] = {{1,2},{1,2}};
    int mtx_mul[2][2];

    int i,j,k;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<2;k++){
                mtx_mul[j][k] = mtx1[i][k] * mtx2[k][j];
            }
        }
    }

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ", mtx_mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}