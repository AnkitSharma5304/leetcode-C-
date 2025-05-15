// LeetCode 560, titled "Subarray Sum Equals K," is a problem that asks you to find the number of continuous subarrays whose sum equals to a given integer 
// 𝑘
// k. Let's walk through the solution in C++ in detail.

// Problem Description
// You are given an array of integers nums and an integer k, and you need to return the total number of continuous subarrays whose sum equals to k.

// Example
// cpp
// Copy code
// Input: nums = [1,1,1], k = 2
// Output: 2
// Approach
// To solve this problem efficiently, you can use a hashmap (or unordered_map in C++) to store the cumulative sum up to each index. The key idea is to use the cumulative sum and check how many times a particular cumulative sum has appeared.

// Key Concepts
// Cumulative Sum: This is the sum of elements from the start of the array up to the current index.
// HashMap Usage: Use a hashmap to store the cumulative sum and its frequency of occurrence.
// Algorithm Steps
// Initialize a hashmap to store the cumulative sum and its frequency.
// Initialize variables: count to store the number of subarrays, sum to store the cumulative sum.
// Iterate through the array and update the cumulative sum.
// For each element, check if sum - k exists in the hashmap. If it does, it means there is a subarray ending at the current index which sums to k.
// Update the hashmap with the current cumulative sum.
// Code Implementation
// Here's the detailed C++ implementation:

// cpp
// Copy code
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> sum_count; // map to store cumulative sum and its frequency
    sum_count[0] = 1; // initialize with sum 0 to handle the case when subarray starts from index 0
    int sum = 0; // cumulative sum
    int count = 0; // count of subarrays
    
    for (int num : nums) {
        sum += num; // update cumulative sum
        if (sum_count.find(sum - k) != sum_count.end()) {
            count += sum_count[sum - k]; // add the frequency of (sum - k) to count
        }
        sum_count[sum]++; // update the frequency of the current cumulative sum
    }
    
    return count; // return the total count of subarrays
}

int main() {
    vector<int> nums = {1, 1, 1};
    int k = 2;
    cout << "Number of subarrays with sum " << k << " is: " << subarraySum(nums, k) << endl;
    return 0;
}
// Explanation
// Initialization:

// sum_count[0] = 1 handles cases where a subarray starting from index 0 sums to k.
// sum is the cumulative sum.
// count is the number of subarrays found.
// Loop through the array:

// For each element, update the cumulative sum sum.
// Check if sum - k exists in the hashmap. If it does, it means there are subarrays that sum up to k ending at the current element.
// Increment count by the frequency of sum - k.
// Update the frequency of the current cumulative sum in the hashmap.
// Return the result:

// After iterating through the array, count contains the number of subarrays whose sum equals k.
// Time Complexity
// The time complexity of this solution is 
// 𝑂
// (
// 𝑛
// )
// O(n) because we are iterating through the array once, and each operation inside the loop (hashmap operations) is 
// 𝑂
// (
// 1
// )
// O(1) on average.

// Space Complexity
// The space complexity is 
// 𝑂
// (
// 𝑛
// )
// O(n) due to the hashmap storing the cumulative sums.

// This approach ensures that we efficiently count the subarrays without needing nested loops, which would result in a less efficient 
// 𝑂
// (
// 𝑛
// 2
// )
// O(n 
// 2
//  ) solution.

//  if (sum_count.find(sum - k) != sum_count.end()) what does this sum_count.end() means 
// ChatGPT
// In C++, the unordered_map container has a member function end() which returns an iterator pointing to the past-the-end element in the map container. This element does not actually exist; it acts as a placeholder to signify that the element was not found.

// Detailed Explanation
// sum_count.find(sum - k):
// This function searches the unordered_map for an element with the key sum - k.
// If the key is found, it returns an iterator pointing to the element.
// If the key is not found, it returns an iterator pointing to sum_count.end().
// sum_count.end():
// end() returns an iterator to the element past the last element of the map.
// This iterator is used to signify the end of the map, meaning it points to a position that is out of the bounds of the actual elements in the map.
// It is used to check if a key does not exist in the map.
// Usage in Code
// In the condition if (sum_count.find(sum - k) != sum_count.end()), we are checking whether sum - k exists as a key in the unordered_map sum_count.

// If sum_count.find(sum - k) != sum_count.end() evaluates to true, it means that sum - k is found in the map, and hence there is a cumulative sum recorded which, when subtracted by k, equals the current cumulative sum.
// If sum_count.find(sum - k) != sum_count.end() evaluates to false, it means that sum - k is not found in the map, indicating that no such cumulative sum has been recorded up to the current index.
// Practical Example
// Here's a concrete example to illustrate:

// cpp
// Copy code
// #include <iostream>
// #include <unordered_map>

// int main() {
//     std::unordered_map<int, int> sum_count;
//     sum_count[0] = 1; // example entry

//     int sum = 5;
//     int k = 3;

//     // sum - k = 5 - 3 = 2
//     // Checking if 2 is a key in sum_count
//     if (sum_count.find(sum - k) != sum_count.end()) {
//         std::cout << "Key found!" << std::endl;
//     } else {
//         std::cout << "Key not found!" << std::endl;
//     }

//     return 0;
// }
// Output:

// mathematica
// Copy code
// Key not found!
// In this example:

// sum_count.find(2) returns sum_count.end() because the key 2 does not exist in the map.
// Therefore, the condition sum_count.find(sum - k) != sum_count.end() evaluates to false, and "Key not found!" is printed.
// Summary
// In summary, sum_count.end() is an iterator pointing to a position just past the last element in the unordered_map. It is used to check if a key exists in the map. If the find() function returns end(), it means the key was not found in the map.