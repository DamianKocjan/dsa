# Insertion Sort

## Time Complexity:

- Best case: O(n) , If the list is already sorted, where n is the number of elements in the list.
- Average case: O(n^2) , If the list is randomly ordered
- Worst case: O(n^2) , If the list is in reverse order

Space Complexity of Insertion Sort

- Auxiliary Space: O(1), Insertion sort requires O(1) additional space, making it a space-efficient sorting algorithm.

## Advantages of Insertion Sort:

- Simple and easy to implement.
- Stable sorting algorithm.
- Efficient for small lists and nearly sorted lists.
- Space-efficient as it is an in-place algorithm.
- Adoptive. the number of inversions is directly proportional to number of swaps. For example, no swapping happens for a sorted array and it takes O(n) time only.

## Disadvantages of Insertion Sort:

- Inefficient for large lists.
- Not as efficient as other sorting algorithms (e.g., merge sort, quick sort) for most cases.

## Applications of Insertion Sort:

Insertion sort is commonly used in situations where:

- The list is small or nearly sorted.
- Simplicity and stability are important.
- Used as a subroutine in Bucket Sort
- Can be useful when array is already almost sorted (very few inversions)
- Since Insertion sort is suitable for small sized arrays, it is used in Hybrid Sorting algorithms along with other efficient algorithms like Quick Sort and Merge Sort. When the subarray size becomes small, we switch to insertion sort in these recursive algorithms. For example IntroSort and TimSort use insertions sort.

## Pseudocode:

```
InsertionSort(A)
    for i = 1 to A.length - 1
        key = A[i]
        j = i - 1

        while j >= 0 and A[j] > key
            A[j + 1] = A[j]
            j = j - 1

        A[j + 1] = key
```
