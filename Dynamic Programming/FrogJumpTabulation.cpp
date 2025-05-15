#include<bits/stdc++.h>
using namespace std;
//  int func(int index , vector<int> &height,vector<int> &dp){
//     if(index==0){
//         return 0;
//     }
//     if(dp[index] !=-1){
//         return dp[index]; // memoization texhnique
//     }
//     int left=func(index-1 , height , dp) + abs(height[index] - height[index-1] );
//     int right=INT_MAX;
//     if(index>1){
//         right=func(index-2 , height , dp) + abs(height[index]- height[index-2] );
//     }
//     return dp[index]=min(left,right); // adding value to dp index 
//  }
 int main(){
    int n;
    cin>>n;
    vector<int> height={10,20,30,40,50};
   vector<int> dp(n,0);
 dp[0]=0;//base case from memoization
 for(int i=1 ; i<n ; i++){
    int fs=dp[i-1]+abs(height[i] - height[i-1]);
    int ss=INT_MAX;
    if(i>1){
    int ss=dp[i-2]+abs(height[i]-height[i-2]);// STAR POINT .... whenever there is a index typ i-1 || i-2 there can always be an space optimization REFER DP 3 TAKE U FRWD
    }
    dp[i]=min(fs,ss);

 }
 return dp[n-1];

 }