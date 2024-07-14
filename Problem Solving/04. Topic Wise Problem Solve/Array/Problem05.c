// Write a C program to reverse the elements of an array.

#include<stdio.h>
int main(){
    
    int i,j;
    int a[10] = {88,30,68,54,48,52,88,22,14,74};

    printf("Actual Array: \n");
    for (i = 0; i<10; i++){
        printf("%d ", a[i]);
    }

    printf("\n");

    printf("Reversed Array: \n");
    for (j=9; j>=0; j--){
        printf("%d ", a[j]);
    }
    
    return 0;


}