//Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

#include <iostream>
#include <vector>
#include <algorithm>

int maxSubarray(const std::vector<int>& nums) {
    int max_sum = nums[0];
    int current_sum = nums[0];
    for (size_t i = 1; i < nums.size(); ++i) {
        current_sum = std::max(nums[i], current_sum + nums[i]);
        max_sum = std::max(max_sum, current_sum);
    }
    return max_sum;
}

int main() {
    std::vector<int> nums;
    int value;
    while (std::cin >> value) {
        nums.push_back(value);
    }

    if (nums.empty()) {
        return 0;
    }

    std::cout << maxSubarray(nums) << std::endl;
    return 0;
}