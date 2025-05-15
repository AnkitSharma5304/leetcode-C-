#include<bits/stdc++.h>
using namespace std;
 int func(int index , vector<int> &height,vector<int> &dp){
    if(index==0){
        return 0;
    }
    if(dp[index] !=-1){
        return dp[index]; // memoization texhnique
    }
    int left=func(index-1 , height , dp) + abs(height[index] - height[index-1] );
    int right=INT_MAX;
    if(index>1){
        right=func(index-2 , height , dp) + abs(height[index]- height[index-2] );
    }
    return dp[index]=min(left,right); // adding value to dp index 
 }
 int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    vector<int> height={10,20,30,40,50};
    int x = func(n-1,height,dp);
    cout<<x;
    return 0;
 }