# Linear Search

## Time Complexity
The time complexity of linear search is O(n), where n is the size of the array.
In the worst case, we may have to check every element in the array to find the key.

- Best: O(1)
- Average: O(n)
- Worst: O(n)
- Space: O(1)

## Pseudocode
```
LinearSearch(A, key)
    for i = 0 to A.length - 1
        if A[i] == key
            return i
    return -1
```
