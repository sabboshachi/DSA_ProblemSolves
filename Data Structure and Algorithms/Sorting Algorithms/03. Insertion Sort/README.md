# Insertion Sort

Insertion sort is like sorting playing cards in your hands. You split the cards into two groups: the sorted cards and the unsorted cards. Then, you pick a card from the unsorted group and put it in the right place in the sorted group.

## How It Works:
Insertion sort is a simple sorting algorithm that works by building a sorted array one element at a time. It is considered an ” in-place ” sorting algorithm, meaning it doesn’t require any additional memory space beyond the original array.

To achieve insertion sort, follow these steps:

* We start with second element of the array as first element in the array is assumed to be sorted.
* Compare second element with the first element and check if the second element is smaller then swap them.
* Move to the third element and compare it with the second element, then the first element and swap as necessary to put it in the correct position among the first three elements.
* Continue this process, comparing each element with the ones before it and swapping as needed to place it in the correct position among the sorted elements.
* Repeat until the entire array is sorted.

## Time Complexity:
The time complexity of Insertion Sort is O(n<sup>2</sup>).

## Pseudocode:

```pseudo
procedure insertionSort(arr: array of integers)
    n = length(arr)
    for i = 1 to n - 1 do
        key = arr[i]
        j = i - 1
        while j >= 0 and arr[j] > key do
            arr[j + 1] = arr[j]
            j = j - 1
        end while
        arr[j + 1] = key
    end for
end procedure
```

## Advantages
1. Simple to implement and understand.
2. Adoptive. the number of inversions is directly proportional to number of swaps. For example, no swapping happens for a sorted array and it takes O(n) time only.
3. Stable sorting algorithm: Maintains the relative order of equal elements.
4. In-place sorting: Uses O(1) extra space.

## Disadvantages
1. Inefficient for large datasets: Has a time complexity of O(n²) in the worst and average cases.
2. Not suitable for very large datasets compared to more advanced sorting algorithms like Merge Sort or Quick Sort.

## Use Cases:
1. Small or partially sorted datasets: Insertion Sort performs well when the list is already mostly sorted.
2. Online sorting: It’s useful when the elements are continuously added to the list and need to be sorted dynamically.

