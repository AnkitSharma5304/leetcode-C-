#include<bits/stdc++.h>
using namespace std;

int main() {
    string ans = "";
    int carry = 0;
    string a, b;
    cin >> a >> b;

    int i = a.length() - 1;
    int j = b.length() - 1;

    while (i >= 0 || j >= 0 || carry == 1) {
        int sum = carry;
        if (i >= 0) {
            sum += a[i] - '0';  // Corrected character to integer conversion
            i--;
        }
        if (j >= 0) {
            sum += b[j] - '0';  // Corrected character to integer conversion
            j--;
        }
        carry = sum / 2;
        sum = sum % 2;
        ans.push_back(sum + '0');  // Corrected integer to character conversion
    }

    reverse(ans.begin(), ans.end());  // Correctly reverse the string in place
    cout << ans;

    return 0;
}
