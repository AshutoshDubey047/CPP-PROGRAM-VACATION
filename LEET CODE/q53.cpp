//Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

#include <iostream>
#include <vector>
#include <algorithm>
// For parsing a single input line of integers.
#include <sstream>

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
    std::string line;
    if (!std::getline(std::cin, line) || line.empty()) {
        return 0;
    }

    std::vector<int> nums;
    std::istringstream iss(line);
    int value;
    while (iss >> value) {
        nums.push_back(value);
    }

    if (nums.empty()) {
        return 0;
    }

    std::cout << maxSubarray(nums) << std::endl;
    return 0;
}