#include <iostream>
#include <vector>
#include <unordered_map>

// Problem: Two Sum
// Given an array of integers and a target, return indices of the two numbers that add up to target.
std::vector<int> twoSum(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> seen;
    for (int i = 0; i < static_cast<int>(nums.size()); ++i) {
        int complement = target - nums[i];
        if (seen.find(complement) != seen.end()) {
            return {seen[complement], i};
        }
        seen[nums[i]] = i;
    }
    return {};
}

int main() {
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    std::cout << "Input array: [2, 7, 11, 15], Target: " << target << "\n";

    std::vector<int> result = twoSum(nums, target);
    if (!result.empty()) {
        std::cout << "Indices: [" << result[0] << ", " << result[1] << "]\n";
        std::cout << "Values: " << nums[result[0]] << " + " << nums[result[1]] << " = " << target << "\n";
    } else {
        std::cout << "No solution found.\n";
    }

    return 0;
}
