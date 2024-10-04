# Bubble Sort

Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. This algorithm is not suitable for large data sets as its average and worst-case time complexity are quite high.

## How It Works:
1. Start from the first element of the array.
2. Compare it with the next element.
3. If the first element is larger than the next, swap them.
4. Move to the next pair of elements and repeat the comparison and swapping.
5. After the first pass, the largest element "bubbles" to the end of the array.
6. Continue the process for the rest of the elements, ignoring the already sorted part at the end.

## Time Complexity:
The time complexity of Bubble Sort is O(n<sup>2</sup>).

## Example

For an array `[5, 2, 9, 1, 5, 6]`:

**First Pass**:
- `[2, 5, 9, 1, 5, 6]`
- `[2, 5, 1, 9, 5, 6]`
- `[2, 5, 1, 5, 9, 6]`
- `[2, 5, 1, 5, 6, 9]`

The largest element 9 is now sorted.

## Pseudocode:

```pseudo
procedure bubbleSort(arr: array of integers)
    n = length(arr)
    repeat
        swapped = false
        for i = 0 to n-2 do
            if arr[i] > arr[i + 1] then
                swap(arr[i], arr[i + 1])
                swapped = true
            end if
        end for
    until not swapped
end procedure
```

## Key Points:
1. Time complexity: O(n²) in the worst and average cases.
2. Space complexity: O(1) because it’s an in-place sorting algorithm.
3. Best used for small or nearly sorted lists, as it is inefficient for large datasets compared to more advanced algorithms.

## Advantages
1. Bubble sort is easy to understand and implement.
2. It does not require any additional memory space.
3. It is a stable sorting algorithm, meaning that elements with the same key value maintain their relative order in the sorted output.

## Disadvantages
1. Bubble sort has a time complexity of O(n<sup>2</sup>) which makes it very slow for large data sets.
2. Bubble sort is a comparison-based sorting algorithm, which means that it requires a comparison operator to determine the relative order of elements in the input data set. It can limit the efficiency of the algorithm in certain cases.


