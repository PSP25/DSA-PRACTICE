#include <iostream>
#include <vector>
#include <algorithm>

void printPermutations(std::vector<int>& nums, int start) {
     if (start == nums.size() - 1) {
          for (int num : nums) {
               std::cout << num << " ";
          }
          std::cout << std::endl;
          return;
     }

     for (int i = start; i < nums.size(); ++i) {
          std::swap(nums[start], nums[i]);
          printPermutations(nums, start + 1);
          std::swap(nums[start], nums[i]); // backtrack
     }
}

int main() {
     std::vector<int> nums = {1, 2, 3};
     printPermutations(nums, 0);
     return 0;
}