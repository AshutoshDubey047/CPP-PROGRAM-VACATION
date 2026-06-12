#include <iostream>
#include <cassert>
#include "array_utils.h"

void test_sum() {
    int nums1[] = {5, 15, 22, 1, -15, -24};
    assert(sum(nums1, 6) == 5);

    int nums2[] = {0, 0, 0, 0};
    assert(sum(nums2, 4) == 0);

    int nums3[] = {-1, -2, -3, -4};
    assert(sum(nums3, 4) == -10);
}

void test_product() {
    int nums1[] = {5, 15, 22, 1, -15, -24};
    assert(product(nums1, 6) == -19800);

    int nums2[] = {1, 1, 1, 1};
    assert(product(nums2, 4) == 1);

    int nums3[] = {-1, -2, -3, -4};
    assert(product(nums3, 4) == -24);
}

int main() {
    test_sum();
    test_product();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}