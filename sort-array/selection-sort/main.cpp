#include <algorithm>
#include <iostream>
#include <random>

#define SIZE 100

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int arr[]) {
    for (int i = 0; i < SIZE - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < SIZE; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
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

    selectionSort(arr);

    std::cout << "Sorted Array: " << std::endl;

    printArray(arr, SIZE);

    return 0;
}