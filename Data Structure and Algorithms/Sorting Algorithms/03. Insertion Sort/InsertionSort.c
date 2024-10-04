#include<stdio.h>
#include <stdbool.h>

int insertionSort(int arr[], int n){
    int i, j;
    for(i=1;i<n;i++){
        int key = arr[i];
        j = i - 1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
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

    insertionSort(arr,size);
    printf("\n");

    printf("Sorted Array:\n");
    printArray(arr,size);

}