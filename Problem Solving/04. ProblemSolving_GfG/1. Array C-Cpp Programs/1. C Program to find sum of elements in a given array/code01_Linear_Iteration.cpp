#include<iostream>
using namespace std;

int sum(int a[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + a[i];
    }
    return sum;
}

int main(){
    int arr[] = {12, 3, 4, 171, 18};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Sum of the elements of the array is: " << sum(arr, size);
    return 0;
}