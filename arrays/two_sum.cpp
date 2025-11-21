/**
 * LeetCode #1: Two Sum
 * Difficulty: Easy
 * Time: O(n), Space: O(n)
 * 
 * Problem: Find two numbers that add up to target
 * Input: nums = [2,7,11,15], target = 9
 * Output: [0,1] (nums + nums = 2 + 7 = 9)
 */

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> seen;
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        
        // Check if complement exists
        if (seen.find(complement) != seen.end()) {
            return {seen[complement], i};
        }
        
        // Store current number and index
        seen[nums[i]] = i;
    }
    
    return {};  // No solution found
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    
    vector<int> result = twoSum(nums, target);
    cout << "Two Sum Indices: [" << result << ", " << result << "]" << endl;
    
    return 0;
}
