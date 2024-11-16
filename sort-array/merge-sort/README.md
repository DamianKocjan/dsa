# Merge Sort

## Time Complexity:

- Best Case: O(n log n), When the array is already sorted or nearly sorted.
- Average Case: O(n log n), When the array is randomly ordered.
- Worst Case: O(n log n), When the array is sorted in reverse order.

Auxiliary Space: O(n), Additional space is required for the temporary array used during merging.

## Applications of Merge Sort:

- Sorting large datasets
- External sorting (when the dataset is too large to fit in memory)
- Inversion counting
- Merge Sort and its variations are used in library methods of programming languages. For example its variation TimSort is used in Python, Java Android and Swift. The main reason why it is preferred to sort non-primitive types is stability which is not there in QuickSort. For example Arrays.sort in Java uses QuickSort while Collections.sort uses MergeSort.
- It is a preferred algorithm for sorting Linked lists.
- It can be easily parallelized as we can independently sort subarrays and then merge.
- The merge function of merge sort to efficiently solve the problems like union and intersection of two sorted arrays.

## Advantages of Merge Sort:

- Stability : Merge sort is a stable sorting algorithm, which means it maintains the relative order of equal elements in the input array.
- Guaranteed worst-case performance: Merge sort has a worst-case time complexity of O(N logN) , which means it performs well even on large datasets.
- Simple to implement: The divide-and-conquer approach is straightforward.
- Naturally Parallel : We independently merge subarrays that makes it suitable for parallel processing.

## Disadvantages of Merge Sort:

- Space complexity: Merge sort requires additional memory to store the merged sub-arrays during the sorting process.
- Not in-place: Merge sort is not an in-place sorting algorithm, which means it requires additional memory to store the sorted data. This can be a disadvantage in applications where memory usage is a concern.
- Slower than QuickSort in general. QuickSort is more cache friendly because it works in-place.

## Pseudocode:

```
MergeSort(arr)
    if arr.length <= 1
        return arr

    mid = arr.length / 2
    left = arr[:mid]
    right = arr[mid:]

    left = MergeSort(left)
    right = MergeSort(right)

    return Merge(left, right)

Merge(left, right)
    result = []
    i, j = 0, 0

    while i < len(left) and j < len(right)
        if left[i] <= right[j]
            result.append(left[i])
            i += 1
        else
            result.append(right[j])
            j += 1

    while i < len(left)
        result.append(left[i])
        i += 1

    while j < len(right)
        result.append(right[j])
        j += 1

    return result
```
