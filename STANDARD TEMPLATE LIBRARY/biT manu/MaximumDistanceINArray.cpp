class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int mini = arrays[0][0];  // Start with the first element of the first array
        int maxi = arrays[0].back();  // Start with the last element of the first array
        int maxDist = 0;

        for (int i = 1; i < arrays.size(); i++) {
            // Update the maximum distance using the first and last elements of the current array
            maxDist = max(maxDist, abs(arrays[i].back() - mini));
            maxDist = max(maxDist, abs(maxi - arrays[i][0]));

            // Update mini and maxi
            mini = min(mini, arrays[i][0]);
            maxi = max(maxi, arrays[i].back());
        }

        return maxDist;
    }
};
