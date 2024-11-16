# Binary Search

## Time Complexity:

- Best Case: O(1)
- Average Case: O(log N)
- Worst Case: O(log N)

## Pseudocode:

```
BinarySearch(A, key)
    low = 0
    high = A.length - 1

    while low <= high
        mid = low + (high - low) / 2

        if A[mid] == key
          return mid
        else if A[mid] < key
          low = mid + 1
        else
          high = mid - 1

    return -1
```
