#include <algorithm>
#include <iostream>
#include <random>

int binarySearch(int arr[], int size, int key) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

int randomInt(int min, int max) {
    return rand() % (max - min + 1) + min;
}

void generateRandomArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] =randomInt(0, 100);;
    }
}

#define SIZE 100

int main() {
    int arr[SIZE];

    srand(time(0));

    generateRandomArray(arr, SIZE);
    std::sort(arr, arr + SIZE);

    std::cout << "Sorted Array: ";

    for (int i = 0; i < SIZE; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    int searchKey = randomInt(0, 100);

    std::cout << "Searching for " << searchKey << ": " << std::endl;

    int result = binarySearch(arr, SIZE, searchKey);

    if (result != -1) {
        std::cout << "Found at index: " << result << std::endl;
    } else {
        std::cout << "Not found" << std::endl;
    }

    return 0;
}