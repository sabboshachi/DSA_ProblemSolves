// Write a C program to sort elements of an array in ascending order.

#include<stdio.h>
int main(){
    
    int i, j, k;
    int a[10] = {288,30,688,54,48,52,88,22,14,74};

    printf("Original Array: \n");
    for (i=0; i<10; i++){
        printf("%d ", a[i]);
    }

    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(a[i]>a[j]){
                k = a[i];
                a[i] = a[j];
                a[j] = k;
                k = 0;
            }
        }
    }


    printf("\nStorted Array: \n");
    for (i=0; i<10; i++){
        printf("%d ", a[i]);
    }
}