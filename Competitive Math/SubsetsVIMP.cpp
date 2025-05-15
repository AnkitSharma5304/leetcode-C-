// #include<bits/stdc++.h>
// using namespace std;
// void solve(vector<int> nums , vector<int> output , int index , vector<vector<int>> &ans){
// if(index>=nums.size()){
//     ans.push_back(output);
//     return ;
// }

// //excluding 
// solve(nums,output,index+1,ans);

// //including
// int element=nums[index];
// output.push_back(element);
// solve(nums,output,index+1,ans);

// }
// int main(int argc, char const *argv[])
// {   
//     vector<int> nums;
//     int n;
//     cout<<"enter the size of the array";
//     cin>>n;
//     for(int i=0 ; i<n ;i++){
//         cin>>nums[i];
//     }
//     for(int i=0 ; i<n ;i++){
//         cout<<nums[i]<" ";

//     }
//     vector<int> output;
//     vector<vector<int>> ans;
//     int index=0;
//     solve(nums,output,index,ans);
//     for(int i=0 ; i<n ; i++){
//         for(int j=0 ; j<n ; j++){
//             cout<<ans[i]<<" ";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

// Function to generate all subsets
void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans) {
    // Base case: if index is equal to the size of nums, add the output to ans and return
    if (index >= nums.size()) {
        ans.push_back(output);
        return;
    }

      // Excluding the current element // this should always be above including since if we add it after including we will have to pop the element first 
      solve(nums, output, index + 1, ans);

    // Including the current element
    int element = nums[index];
    output.push_back(element);
    solve(nums, output, index + 1, ans);

  
}

int main(int argc, char const *argv[]) {   
    vector<int> nums;
    int n;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    // Resize the nums vector to accommodate n elements
    nums.resize(n);

    // Input the elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Display the input array
    cout << "Input array: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    vector<int> output;
    vector<vector<int>> ans;
    int index = 0;

    // Generate all subsets
    solve(nums, output, index, ans);

    // Print all subsets
  cout << "Subsets: " << endl;
for (int i = 0; i < ans.size(); ++i) {
    for (int j = 0; j < ans[i].size(); ++j) {
        cout << ans[i][j] << " ";
    }
    cout << endl;
}


    return 0;
}
// Alternative 1: Using Traditional For Loops
// Instead of using range-based for loops, you can use traditional for loops with indices.

// cpp
// Copy code
// cout << "Subsets: " << endl;
// for (size_t i = 0; i < ans.size(); ++i) {
//     for (size_t j = 0; j < ans[i].size(); ++j) {
//         cout << ans[i][j] << " ";
//     }
//     cout << endl;
// }
// Alternative 2: Using Iterators
// You can use iterators to iterate over the elements in ans and subset.

// cpp
// Copy code
// cout << "Subsets: " << endl;
// for (auto it = ans.begin(); it != ans.end(); ++it) {
//     for (auto jt = it->begin(); jt != it->end; ++jt) {
//         cout << *jt << " ";
//     }
//     cout << endl;
// }
// Alternative 3: Using for_each and Lambda Functions
// You can use the for_each algorithm along with lambda functions.

// cpp
// Copy code
// cout << "Subsets: " << endl;
// for_each(ans.begin(), ans.end(), [](const vector<int>& subset) {
//     for_each(subset.begin(), subset.end(), [](int num) {
//         cout << num << " ";
//     });
//     cout << endl;
// });
// Alternative 4: Using join with ostringstream
// For better readability, you can join the elements of each subset into a single string before printing.

// cpp
// Copy code
// #include <sstream>

// cout << "Subsets: " << endl;
// for (const auto &subset : ans) {
//     ostringstream oss;
//     for (size_t i = 0; i < subset.size(); ++i) {
//         oss << subset[i];
//         if (i != subset.size() - 1) {
//             oss << " ";
//         }
//     }
//     cout << oss.str() << endl;
// }
// Alternative 5: Using the copy Algorithm with an Output Iterator
// You can use the copy algorithm to copy elements to cout with an output iterator and a delimiter.

// cpp
// Copy code
// #include <iterator>

// cout << "Subsets: " << endl;
// for (const auto &subset : ans) {
//     copy(subset.begin(), subset.end(), ostream_iterator<int>(cout, " "));
//     cout << endl;
// }
// These alternatives achieve the same result of printing the subsets, but they utilize different techniques and standard library features. Choose the one that best fits your style and requirements.







