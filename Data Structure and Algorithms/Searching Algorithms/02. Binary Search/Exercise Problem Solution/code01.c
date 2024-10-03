// Find the number of rotations in a circularly sorted array.

#include<stdio.h>
int findRotationCount(int arr[], int low, int high, int n){
    while(high>=low){

        // Initial low = 0 and high = 5 (size is 6).
        // First, check if the array is already sorted. Since nums[low] (8) is not less than nums[high] (6), it is not sorted.
        if(arr[low] <= arr[high]){
            return low;
        }
        // Calculate mid = 0 + (5 - 0) / 2 = 2. The middle element is 10.
        int mid = (low + high) / 2;

        // Find the next and previous element of the `mid` element (in a circular manner)
        int next = (mid + 1) % n;
        int prev = (mid - 1 + n) % n;

        // Check if nums[mid] = 10 is the smallest by comparing it to nums[next] = 2 and nums[prev] = 9. 
        // Since 10 is greater than 2, it’s not the smallest. 

        // Now check if the right half (nums[0] to nums[2]) is sorted. It is, so discard the left half and update low = mid + 1 = 2 + 1 = 3.
        // Now, low = 3 and high = 5.
        // Calculate mid = (3 + 5) / 2 = 4. The middle element is 5.
        // Check if nums[mid] = 5 is the smallest. It’s not because nums[next] = 6 and nums[prev] = 2 show that 5 > 2.
        // Since the right half is sorted, discard it and search the left half (low = mid - 1 = 4 - 1 = 3).
        // Finally, low = 3 and high = 3. Now mid = (3 + 3) / 2 = 3. The middle element is 2.
        // Check if nums[mid] = 2 is the smallest. Yes, it is.

        if(arr[mid]<=arr[next] && arr[mid]<=arr[prev]){
            return mid;
        }
        else if(arr[mid] <= arr[high]){
            high = mid - 1;
        }
        else if(arr[mid] >= arr[low]){
            low = mid + 1;
        }
    }

    
}

int main(){
    int arr[] = { 7, 8, 9, 10, 2, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);

    int count = findRotationCount(arr,0,n-1, n);
    printf("Array is rotated %d times", count);

    return 0;
}