#include<stdio.h>
#include <stdbool.h>

int boubleSort(int arr[], int n){
    int i,j,temp;
    bool SWAPPED;

    for(i=0;i<n-1;i++){
        SWAPPED = false;
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                SWAPPED = true;
            }
        }
        if(SWAPPED == false){
            break;
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
    int arr[] = {50, 25, 5, 10, 20};
    int size;
    size = sizeof(arr)/sizeof(arr[0]);

    printf("Original Array:\n");
    printArray(arr,size);

    boubleSort(arr,size);
    printf("\n");

    printf("Sorted Array:\n");
    printArray(arr,size);

}