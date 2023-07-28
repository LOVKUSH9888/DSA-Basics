#include <algorithm>
#include <iostream>

int main() {
    int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    std::sort(arr, arr + 10);
    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";
    }
    return 0;
}

//revising 