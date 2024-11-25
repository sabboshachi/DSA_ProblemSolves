// Need to study More


#include <iostream>
#include <vector>
using namespace std;

// Recursive function to find the maximum of an array
int largestRecursive(const vector<int>& arr, int index)
{
    // Base case: if we are at the first element, return it
    if (index == 0)
        return arr[0];

    // Recursive case: find the maximum of the rest of the array
    int maxOfRest = largestRecursive(arr, index - 1);

    // Compare the current element with the maximum of the rest
    return max(arr[index], maxOfRest);
}

// Driver Code
int main()
{
    vector<int> arr = {10, 324, 45, 90, 9808};
    int n = arr.size();
    cout << "Largest in given array is " << largestRecursive(arr, n - 1);
    return 0;
}

// Here’s a detailed explanation of each step for the input [10, 324, 45, 90, 9808] in the recursive process:

// Function Call Stack:
// The recursion works by breaking the problem into smaller subproblems and building the result step by step. Let’s go through how the recursive function largestRecursive processes the array.

// Input Array: [10, 324, 45, 90, 9808]
// Step-by-Step Execution:
// Initial Call:
// The driver function calls largestRecursive(arr, 4) where 4 is the last index of the array.
// The function will now compare the last element (arr[4] = 9808) with the maximum of the previous subarray (calculated recursively).
// Recursive Call 1:
// largestRecursive(arr, 3) is invoked.
// The function now compares the fourth element (arr[3] = 90) with the maximum of the previous subarray ([10, 324, 45]).
// Recursive Call 2:
// largestRecursive(arr, 2) is invoked.
// The function now compares the third element (arr[2] = 45) with the maximum of the previous subarray ([10, 324]).
// Recursive Call 3:
// largestRecursive(arr, 1) is invoked.
// The function now compares the second element (arr[1] = 324) with the maximum of the previous subarray ([10]).
// Base Case:
// largestRecursive(arr, 0) is invoked.
// Since the index is 0, the base case is triggered, and the function returns arr[0] = 10 directly.
// Backtracking Phase:
// Now the recursion starts unwinding, combining results from the base case upwards:

// Returning to Recursive Call 3:
// The result from the base case is 10.
// Compare arr[1] = 324 with 10:
// max(324, 10) = 324.
// Return 324.
// Returning to Recursive Call 2:
// The result from the previous call is 324.
// Compare arr[2] = 45 with 324:
// max(45, 324) = 324.
// Return 324.
// Returning to Recursive Call 1:
// The result from the previous call is 324.
// Compare arr[3] = 90 with 324:
// max(90, 324) = 324.
// Return 324.
// Returning to Initial Call:
// The result from the previous call is 324.
// Compare arr[4] = 9808 with 324:
// max(9808, 324) = 9808.
// Return 9808.
// Final Result:
// The largest number in the array [10, 324, 45, 90, 9808] is 9808.

// How Input Drives the Process:
// The recursive function breaks the problem into smaller parts, starting from the last element and working towards the first.
// At each step, the current element is compared to the maximum of the previously computed subarray until the entire array is processed.
// This "divide and conquer" approach simplifies the computation, allowing the recursion to find the largest value step by step.