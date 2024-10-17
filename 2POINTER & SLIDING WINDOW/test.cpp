#include <iostream>
#include <vector>
#include <algorithm>

// Function to find the maximum sum of a subarray of size k using sliding window
int maxSumSubarray(const std::vector<int>& nums, int k) {
     if (nums.size() < k) return -1;

     int max_sum = 0, window_sum = 0;

     // Calculate the sum of the first window
     for (int i = 0; i < k; ++i) {
          window_sum += nums[i];
     }

     max_sum = window_sum;

     // Slide the window over the array
     for (int i = k; i < nums.size(); ++i) {
          window_sum += nums[i] - nums[i - k];
          max_sum = std::max(max_sum, window_sum);
     }

     return max_sum;
}

// Function to find two numbers in a sorted array that add up to a target using two pointers
std::pair<int, int> twoSum(const std::vector<int>& nums, int target) {
     int left = 0, right = nums.size() - 1;

     while (left < right) {
          int sum = nums[left] + nums[right];
          if (sum == target) {
               return {nums[left], nums[right]};
          } else if (sum < target) {
               ++left;
          } else {
               --right;
          }
     }

     return {-1, -1}; // Return -1, -1 if no pair is found
}

int main() {
     std::vector<int> nums = {1, 3, 2, 5, 7, 2, 4, 9, 6};
     int k = 3;
     int target = 10;

     // Test sliding window
     int max_sum = maxSumSubarray(nums, k);
     std::cout << "Maximum sum of subarray of size " << k << " is " << max_sum << std::endl;

     // Test two pointers
     std::pair<int, int> result = twoSum(nums, target);
     if (result.first != -1) {
          std::cout << "Pair found: " << result.first << " and " << result.second << std::endl;
     } else {
          std::cout << "No pair found with sum " << target << std::endl;
     }

     return 0;
}