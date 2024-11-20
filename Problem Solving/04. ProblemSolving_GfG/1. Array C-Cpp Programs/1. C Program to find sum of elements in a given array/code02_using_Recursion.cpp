#include <iostream>

using namespace std;

int sum(int arr[], int n){
    if(n == 0){
        return 0;
    }
    else{
        return arr[0] + sum(arr + 1, n - 1);
    }
}

int main(){
    int arr[] = {12, 3, 4, 171, 18};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Sum of the elements of the array is: " << sum(arr, size);
    return 0;
}