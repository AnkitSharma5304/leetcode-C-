#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; // Read the size of the vector

    vector<int> arr(n); // Create a vector of size n

    // Read n integers into the vector
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Print each integer from the vector
    for(int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
