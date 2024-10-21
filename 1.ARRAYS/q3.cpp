#include <iostream>
#include <vector>

bool check(std::vector<int>& arr) {
    int count = 0;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < arr[i - 1]) count++;
    }
    if (arr[arr.size() - 1] > arr[0]) count++;
    return count <= 1;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> arr(n);
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    if (check(arr)) {
        std::cout << "The array is a rotated sorted array." << std::endl;
    } else {
        std::cout << "The array is not a rotated sorted array." << std::endl;
    }

    return 0;
}
