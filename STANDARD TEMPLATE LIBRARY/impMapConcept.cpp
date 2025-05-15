class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int, int> mp;
       
        // Count the occurrences of each element in nums1
        for (auto it : nums1) {
            mp[it]++;
        }

        // Check each element in nums2
        for (auto it : nums2) {
            if (mp[it] > 0) {
                ans.push_back(it);
                mp[it]--;
            }
        }

        return ans;
    }
};
