// Search an element in a circularly sorted array

#include<stdio.h>
int findRotationCount(int arr[], int low, int high, int n, int target){
    while(low<=high){
        int mid = (low + high)/2;

        if(arr[mid]== target){
            return mid;
        }

        if(arr[mid]<= arr[high]){
            if(target > arr[mid] && target <= arr[high]){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }else{
            if(target>=arr[low] && target < arr[mid]){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
    }
    return -1;
}


int main(){
    int arr[] = { 8, 9, 10, 2, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 6;
    int result = findRotationCount(arr,0,n-1, n, target);

    if(result == -1){
        printf("Number is not present in the arrary");
    }else{
        printf("The number is on the index %d", result);
    }  

    return 0;
}