#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        if (nums.size() == 1) {
            return true;
        }
        for (int i = 0; i < nums.size() - 1; ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                if ((nums[i] % 2 == 0 && nums[j] % 2 != 0) || (nums[i] % 2 != 0 && nums[j] % 2 == 0)) {
                    return true;
                }
            }
        }
        return false;
    }
};

int main() {
    Solution solution;
    vector<int> test1 = {1};
    vector<int> test2 = {2, 4, 6};
    vector<int> test3 = {2, 3, 6};
    vector<int> test4 = {1, 3, 5};
    
    cout << solution.isArraySpecial(test1) << endl; // true
    cout << solution.isArraySpecial(test2) << endl; // false
    cout << solution.isArraySpecial(test3) << endl; // true
    cout << solution.isArraySpecial(test4) << endl; // false

    return 0;
}
