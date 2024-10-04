// Finding last occurrence of the element

#include<stdio.h>
int findLastOccurence(int arr[], int low, int high, int n, int x){

    int result = -1;

    while(low <= high){
        int mid = (low + high) / 2;
        
        if(arr[mid] == x){
            result = mid;
            low = mid + 1;
        }
        else if(x<arr[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }

    }
    return result;

}

int main(){
    int arr[] = { 2, 5, 5, 5, 6, 6, 8, 9, 9, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 6;
    int result = findLastOccurence(arr,0,n-1, n, target);

    if(result == -1){
        printf("Number is not present in the arrary");
    }else{
        printf("Last occurence of this number is in %d index", result);
    }  

    return 0;
}