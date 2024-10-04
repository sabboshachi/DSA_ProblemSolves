// Find the first, last and total occurrence of a given number in a sorted array
#include<stdio.h>
int findFirstOccurence(int arr[], int low, int high, int n, int x){

    int result_first = -1;

    while(low <= high){
        int mid = (low + high) / 2;
        
        if(arr[mid] == x){
            result_first = mid;
            high = mid - 1;
        }
        else if(x<arr[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }

    }
    return result_first;

}

int findLastOccurence(int arr[], int low, int high, int n, int x){

    int result_last = -1;

    while(low <= high){
        int mid = (low + high) / 2;
        
        if(arr[mid] == x){
            result_last = mid;
            low = mid + 1;
        }
        else if(x<arr[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }

    }
    return result_last;

}

int main(){
    int arr[] = { 2, 5, 5, 5, 6, 6, 8, 9, 9, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 5;
    int result_first = findFirstOccurence(arr,0,n-1, n, target);
    int result_last = findLastOccurence(arr,0,n-1, n, target);
    printf("Total occurance of %d is %d times.", target, (result_last - result_first + 1));
    return 0;
}