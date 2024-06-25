#include <iostream>


void generateFibonacci(int arr[], int size) {
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < size; ++i) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
}


bool binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return true;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return false;
}

int main() {
    const int size = 30;
    int fibonacci[size];


    generateFibonacci(fibonacci, size);


    std::cout << "Fibonacci sequence:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << fibonacci[i] << " ";
    }
    std::cout << std::endl;


    int target;
    std::cout << "Enter the number to search for: ";
    std::cin >> target;


    if (binarySearch(fibonacci, size, target)) {
        std::cout << "The number " << target << " is in the Fibonacci sequence." << std::endl;
    }
    else {
        std::cout << "The number " << target << " is not in the Fibonacci sequence." << std::endl;
    }

    return 0;
}
