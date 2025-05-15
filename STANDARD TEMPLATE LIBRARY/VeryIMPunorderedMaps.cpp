#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> solmap;
        vector<int> ans;
        for (auto i : nums1) {
            if (solmap[i] == 0) {
                solmap[i]++;
            }
        }
        for (auto i : nums2) { // inmp syntax 
            if (solmap[i] == 1) {
                ans.push_back(i);// i iteratos over element this means i is element not 0 1 2 etc..
                solmap[i]--;
            }
        }
        return ans;
    }
};

int main() {
    Solution solution;

    int n1, n2, element;
    vector<int> nums1, nums2;

    cout << "Enter number of elements in nums1: ";
    cin >> n1;
    cout << "Enter elements of nums1: ";
    for (int i = 0; i < n1; ++i) {
        cin >> element;
        nums1.push_back(element);
    }

    cout << "Enter number of elements in nums2: ";
    cin >> n2;
    cout << "Enter elements of nums2: ";
    for (int i = 0; i < n2; ++i) {
        cin >> element;
        nums2.push_back(element);
    }

    vector<int> result = solution.intersection(nums1, nums2);

    cout << "Intersection of nums1 and nums2: ";
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
