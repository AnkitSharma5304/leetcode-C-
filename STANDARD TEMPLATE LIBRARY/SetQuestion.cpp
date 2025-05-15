// // Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// // Notice that the solution set must not contain duplicate triplets.

//  Intuition of this Problem:
// Set is used to prevent duplicate triplets and parallely we will use two pointer approach to maintain J and k.

// NOTE - PLEASE READ APPROACH FIRST THEN SEE THE CODE. YOU WILL DEFINITELY UNDERSTAND THE CODE LINE BY LINE AFTER SEEING THE APPROACH.

// Approach for this Problem:
// Sort the input array
// Initialize a set to store the unique triplets and an output vector to store the final result
// Iterate through the array with a variable i, starting from index 0.
// Initialize two pointers, j and k, with j starting at i+1 and k starting at the end of the array.
// In the while loop, check if the sum of nums[i], nums[j], and nums[k] is equal to 0. If it is, insert the triplet into the set and increment j and decrement k to move the pointers.
// If the sum is less than 0, increment j. If the sum is greater than 0, decrement k.
// After the while loop, iterate through the set and add each triplet to the output vector.
// Return the output vector
// code 
//Optimized Approach - O(n^2 logn + nlogn) - o(n^2 logn) time and O(n) space
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int target = 0;
        sort(nums.begin(), nums.end());
        set<vector<int>> s;
        vector<vector<int>> output;
        for (int i = 0; i < nums.size(); i++){
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == target) {
                    s.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                } else if (sum < target) {
                    j++;
                } else {
                    k--;
                }
            }
        }
        for(auto triplets : s)
            output.push_back(triplets);
        return output;
    }
};