#include <iostream>

template <typename T>
T findMax(const T arr[], int size) {
    T maxElement = arr[0];
    
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    
    return maxElement;
}

int main() {
    const int intArray[] = {3, 7, 1, 9, 4, 6};
    const double doubleArray[] = {2.5, 6.7, 1.2, 8.9, 4.1};
    
    int intArraySize = sizeof(intArray) / sizeof(int);
    int doubleArraySize = sizeof(doubleArray) / sizeof(double);

    int maxInt = findMax(intArray, intArraySize);
    std::cout << "Maximum element in the integer array: " << maxInt << std::endl;

    double maxDouble = findMax(doubleArray, doubleArraySize);
    std::cout << "Maximum element in the double array: " << maxDouble << std::endl;

    return 0;
}