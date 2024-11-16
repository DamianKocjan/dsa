# Bubble Sort

## Time Complexity:

Time Complexity: O(n^2)

Auxiliary Space: O(1)

## Advantages of Bubble Sort:

- Bubble sort is easy to understand and implement.
- It does not require any additional memory space.
- It is a stable sorting algorithm, meaning that elements with the same key value maintain their relative order in the sorted output.

## Disadvantages of Bubble Sort:

- Bubble sort has a time complexity of O(n^2) which makes it very slow for large data sets.
- Bubble sort is a comparison-based sorting algorithm, which means that it requires a comparison operator to determine the relative order of elements in the input data set. It can limit the efficiency of the algorithm in certain cases.

## Pseudocode:

```
BubbleSort(A)
    for i = 0 to A.length - 1
        for j = 0 to A.length - i - 1
            if A[j] > A[j + 1]
                swap(A[j], A[j + 1])
```
