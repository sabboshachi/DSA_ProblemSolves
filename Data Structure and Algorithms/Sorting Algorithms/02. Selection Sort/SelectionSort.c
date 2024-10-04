#include<stdio.h>
#include <stdbool.h>

int selectionSort(int arr[], int n){
    int i,j,temp,min_index;
    for(i=0;i<n-1;i++){
        min_index = i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }
        if(min_index != i){
            temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
}

int printArray(int arr[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main(){
    int arr[] = {50, 25, 125, 5, 10, 20};
    int size;
    size = sizeof(arr)/sizeof(arr[0]);

    printf("Original Array:\n");
    printArray(arr,size);

    selectionSort(arr,size);
    printf("\n");

    printf("Sorted Array:\n");
    printArray(arr,size);

}