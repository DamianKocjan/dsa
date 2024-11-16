#include <algorithm>
#include <iostream>
#include <random>

#define SIZE 100

void insertionSort(int arr[]) {
    for (int i = 1; i < SIZE; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int randomInt(int min, int max) {
    return rand() % (max - min + 1) + min;
}

void generateRandomArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = randomInt(0, 100);;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}


int main() {
    int arr[SIZE];

    srand(time(0));

    generateRandomArray(arr, SIZE);

    std::cout << "Unsorted Array: " << std::endl;

    printArray(arr, SIZE);

    insertionSort(arr);

    std::cout << "Sorted Array: " << std::endl;

    printArray(arr, SIZE);

    return 0;
}