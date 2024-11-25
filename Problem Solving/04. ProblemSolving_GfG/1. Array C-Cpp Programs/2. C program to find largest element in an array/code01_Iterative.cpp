#include<iostream>
#include<vector>

using namespace std;


int largest(const vector<int>& arr, int size){
    int max = arr[0];

    for(int i = 1; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    vector<int> arr = {10, 11, 15, 52, 504, 99, 24};
    int size = arr.size();

    cout << "Largest in given array is " << largest(arr, size) << endl;
    return 0;
}
