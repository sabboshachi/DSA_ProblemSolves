// Write a C program to find the smallest element of an array.

#include<stdio.h>
int main(){
    
    int i, min;
    int a[10] = {288,30,688,54,48,52,88,22,14,74};
    min = a[0];

    for(i=1; i<10; i++){
        if (min > a[i]){
            min = a[i];
        }
    }
    printf("The smallest element in the given array is: %d", min);
}