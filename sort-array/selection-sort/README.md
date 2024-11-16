# Selection Sort

## Time Complexity:

Time Complexity: O(n^2) ,as there are two nested loops:

- One loop to select an element of Array one by one = O(n)
- Another loop to compare that element with every other Array element = O(n)
- Therefore overall complexity = O(n) * O(n) = O(n*n) = O(n^2)

Auxiliary Space: O(1) as the only extra memory used is for temporary variables.

## Advantages of Selection Sort

- Easy to understand and implement, making it ideal for teaching basic sorting concepts.
- Requires only a constant O(1) extra memory space.
- It requires less number of swaps (or memory writes) compared to many other standard algorithms. Only cycle sort beats it in terms of memory writes. Therefore it can be simple algorithm choice when memory writes are costly.

## Disadvantages of the Selection Sort

- Selection sort has a time complexity of O(n^2) makes it slower compared to algorithms like Quick Sort or Merge Sort.
- Does not maintain the relative order of equal elements.
- Does not preserve the relative order of items with equal keys which means it is not stable.

## Applications of Selection Sort

- Perfect for teaching fundamental sorting mechanisms and algorithm design.
- Suitable for small lists where the overhead of more complex algorithms isn’t justified.
- Ideal for systems with limited memory due to its in-place sorting capability.
- Used in simple embedded systems where resource availability is limited and simplicity is important.

## Pseudocode:

```
SelectionSort(A)
    for i = 0 to A.length - 1
        min = i
        for j = i + 1 to A.length
            if A[j] < A[min]
                min = j
        swap(A[i], A[min])
```
