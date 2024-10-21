#include <iostream>
#include <vector>

int removeDuplicates(std::vector<int>& nums) {
    if (nums.size() == 1) return 1;
    int i = 0, j = 1;
    while (j < nums.size() && i < nums.size()) {
        if (nums[i] != nums[j]) {
            nums[++i] = nums[j];
        } else {
            j++;
        }
    }
    return i + 1;
}

int main() {
    // Example usage
    std::vector<int> nums = {1, 1, 2, 2, 3, 4, 4};
    
    int newLength = removeDuplicates(nums);
    
    // Output the result
    std::cout << "The new length of the array is: " << newLength << std::endl;
    std::cout << "The modified array is: ";
    
    for (int i = 0; i < newLength; ++i) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
