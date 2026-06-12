#include <iostream>
#include "array_utils.h"

int main() {
    int nums[] = {5, 15, 22, 1, -15, -24};
    int size = sizeof(nums) / sizeof(nums[0]);

    int sum = calculateSum(nums, size);
    int product = calculateProduct(nums, size);

    std::cout << "Sum of the array is " << sum << std::endl;
    std::cout << "Product of the array is " << product << std::endl;

    return 0;
}