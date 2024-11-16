// Write a C program to find the largest element of an array.

#include<stdio.h>
int main(){
    
    int i, max;
    int a[10] = {25,30,66,54,48,52,88,22,14,7};
    max = a[0];

    for(i=1; i<10; i++){
        if (max < a[i]){
            max = a[i];
        }
    }
    printf("The largest element in the given array is: %d", max);
}