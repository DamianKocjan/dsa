# Linear Search

## Time Complexity

- Best Case: In the best case, the key might be present at the first index. So the best case complexity is O(1)
- Worst Case: In the worst case, the key might be present at the last index i.e., opposite to the end from which the search has started in the list. So the worst-case complexity is O(N) where N is the size of the list.
- Average Case: O(N)

## Pseudocode
```
LinearSearch(A, key)
    for i = 0 to A.length - 1
        if A[i] == key
            return i
    return -1
```
