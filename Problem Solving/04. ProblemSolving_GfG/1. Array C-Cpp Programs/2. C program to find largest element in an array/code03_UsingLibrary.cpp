#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Returns maximum in arr[] of size n
int largest(vector<int>& arr) {
    return *max_element(arr.begin(), arr.end());
}

// Driver code
int main() {
    vector<int> arr = {10, 324, 45, 90, 988};
    cout << largest(arr);
    return 0;
}