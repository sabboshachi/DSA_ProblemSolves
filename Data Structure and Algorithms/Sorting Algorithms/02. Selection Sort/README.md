# Selection Sort

**Selection Sort
Selection Sort is a comparison-based sorting algorithm. It sorts an array by repeatedly selecting the smallest (or largest) element from the unsorted portion and swapping it with the first unsorted element. This process continues until the entire array is sorted.

## How It Works:
1. Start with the first element as the initial position.
2. Find the smallest element in the unsorted portion of the array.
3. Swap this smallest element with the first unsorted element.
4. Move the boundary of the sorted portion one element forward.
5. Repeat steps 2-4 for the remaining unsorted elements until the entire array is sorted.

## Time Complexity:
The time complexity of Selection Sort is O(n<sup>2</sup>).

## Pseudocode:

```pseudo
procedure selectionSort(arr: array of integers)
    n = length(arr)
    for i = 0 to n - 1 do
        minIndex = i
        for j = i + 1 to n do
            if arr[j] < arr[minIndex] then
                minIndex = j
            end if
        end for
        swap(arr[i], arr[minIndex])
    end for
end procedure
```

## Advantages
1. Simple to understand and implement.
2. In-place sorting: Uses a constant amount of extra space (O(1)).
3. Performs well on small datasets.

## Disadvantages
1. Time Complexity: O(n²) in the worst, best, and average cases, making it inefficient for large datasets.
2. Not Stable: Selection Sort does not maintain the relative order of equal elements.

## Use Cases:
1. Selection Sort is typically used when the dataset is small, or when memory is limited and an in-place sorting algorithm is necessary.
2. It's also useful for educational purposes due to its simplicity.
3. Used in simple embedded systems where simplicity is needed.

