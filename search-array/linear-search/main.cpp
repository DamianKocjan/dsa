#include <iostream>
#include <random>

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int randomInt(int min, int max) {
    return rand() % (max - min + 1) + min;
}

void generateRandomArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = randomInt(0, 100);
    }
}

#define SIZE 100

int main() {
    int arr[SIZE];

    srand(time(0));

    generateRandomArray(arr, SIZE);

    std::cout << "Array: ";

    for (int i = 0; i < SIZE; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    int searchKey = randomInt(0, 100);

    std::cout << "Searching for " << searchKey << ": " << std::endl;

    int result = linearSearch(arr, SIZE, searchKey);

    if (result != -1) {
        std::cout << "Found at index: " << result << std::endl;
    } else {
        std::cout << "Not found" << std::endl;
    }

    return 0;
}
