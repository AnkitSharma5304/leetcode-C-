#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    int countSeniors(std::vector<std::string>& details) {
        int ans = 0;
        for (int i = 0; i < details.size(); i++) {
            std::string temp_str = details[i].substr(11, 2);
            int age = std::stoi(temp_str);
            if (age > 60) {
                ans++;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    std::vector<std::string> details = {"JohnDoe12345678", "JaneDoe11506678", "Alice123453068"};
    int result = sol.countSeniors(details);
    std::cout << "Number of seniors: " << result << std::endl; // Expected output: 1
    return 0;
}
