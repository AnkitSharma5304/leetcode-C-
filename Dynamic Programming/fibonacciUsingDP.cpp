#include<bits/stdc++.h>
using namespace std;
int fib(int n , vector<int> &dp){
    if(n<=1){
        return n;
    }
    else if (dp[n]!=-1){
        return dp[n];
    }
    else{
        return dp[n]=fib(n-1,dp) + fib(n-2 ,dp);
    }
}
int main(){
 //using recursion we get overlapping sub problem
 //so we use memization technique-->we tend to store the value of sub problems in some array or map
 //we create a dp array and sets every element to -1
  int n;
  cin>>n;
  vector<int> dp(n+1, -1);
  cout<<fib(n,dp);

    
    return 0;
}
// class Solution {
// public:
//     int fib(int n) {
//         // Initialize dp array with -1 for memoization
//         vector<int> dp(n + 1, -1);
//         return fibHelper(n, dp);
//     }

// private:
//     int fibHelper(int n, vector<int>& dp) {
//         if (n <= 1) {
//             return n;
//         }
//         // Check if the result is already computed
//         if (dp[n] != -1) {
//             return dp[n];
//         }
//         // Compute the result and store it in dp array
//         dp[n] = fibHelper(n - 1, dp) + fibHelper(n - 2, dp);
//         return dp[n];
//     }
// };
