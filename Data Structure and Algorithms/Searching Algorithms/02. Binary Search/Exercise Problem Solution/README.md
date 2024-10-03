# Binary Search

**Binary Search** is a highly efficient algorithm used to find the position of a target element in a **sorted array**. The algorithm repeatedly divides the search interval in half and reduces the problem size, making it much faster than linear search.

## How It Works:

1. **Initial Setup**: You need a sorted array and a target value.
2. **Middle Element**: Calculate the middle index of the current array.
3. **Compare**: Compare the target value with the middle element:
   - If the target equals the middle element, you have found the target and return its index.
   - If the target is smaller than the middle element, repeat the process on the **left half** of the array.
   - If the target is larger than the middle element, repeat the process on the **right half** of the array.
4. **Repeat**: Continue narrowing down the range until the target is found or the subarray size reduces to zero (meaning the target is not in the array).

### Time Complexity:
- **Best case**: O(1) (if the middle element is the target).
- **Average case and Worst case**: O(log n), where `n` is the number of elements. This is because the array is halved in each iteration.

## Example:

Let's search for `23` in the following sorted array: 

Array: [5, 12, 18, 23, 27, 31, 45] Target: 23


1. **Step 1**: Set `low = 0` and `high = 6` (the index of the last element).
2. **Step 2**: Calculate `mid = (0 + 6) / 2 = 3`. The middle element is `array[3] = 23`.
3. **Step 3**: Compare the target `23` with `array[3]`. Since they are equal, the target is found at index `3`.

## Pseudocode:

```pseudo
function binarySearch(arr, target):
    low = 0
    high = length(arr) - 1

    while low <= high:
        mid = (low + high) / 2
        
        if arr[mid] == target:
            return mid  # Target found at index mid
        
        elif arr[mid] < target:
            low = mid + 1  # Search in the right half
        
        else:
            high = mid - 1  # Search in the left half
    
    return -1  # Target not found 
```

## Key Points:

1. Binary Search works only on sorted arrays.
2. It divides the search space into halves, making it very efficient.
3. It runs in O(log n) time, which is much faster than linear search for large datasets.

## Advantages of Binary Search
1. Binary search is faster than linear search, especially for large arrays.
2. More efficient than other searching algorithms with a similar time complexity, such as interpolation search or exponential search.
3. Binary search is well-suited for searching large datasets that are stored in external memory, such as on a hard drive or in the cloud.

## Disadvantages of Binary Search:

1. The Array Must Be Sorted:
  - If the array is unsorted, you must sort it first, which takes additional time (O(n log n)).
2. Contiguous Memory Requirement:
  - Binary Search only works on data structures like arrays that store elements in contiguous memory locations. It cannot be applied to non-contiguous structures like linked lists.

3. Elements Must Be Comparable:
  - The elements in the array must be able to be ordered. If the elements are not comparable (e.g., custom objects without defined comparison operators), Binary Search cannot be used directly.


