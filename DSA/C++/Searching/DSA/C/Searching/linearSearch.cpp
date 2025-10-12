#include <iostream>

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int data[] = {12, 23, 10, 34, 11, 2, 8};
    int valueToFind = 34;
    int n = sizeof(data) / sizeof(data[0]);

    int result = linearSearch(data, n, valueToFind);

    if (result == -1) {
        std::cout << "Element not found in the array." << std::endl;
    } else {
        std::cout << "Element found at index: " << result << std::endl;
    }

    return 0;
}
