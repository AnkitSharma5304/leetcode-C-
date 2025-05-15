#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>nums , vector<int>output , int index , vector<vector<int>> &ans){
   if( index>=nums.size()){
      ans.push_back(output);
      return;
   }
   solve(nums , output , index+1 , ans );
   int x=nums[index];
   output.push_back(x);
   solve(nums, output,index+1,ans);
}
int main(){
   vector<int> nums={3,4,5,6,7,8};
   vector<vector<int>> ans;
   vector<int> output;
   solve(nums,output,0,ans);
   for(int i=0 ; i<ans.size() ; i++){
      for(int j=0 ; j<ans[i].size() ; j++){
         cout<<ans[i][j]<<" ";
      }
      cout<<endl;
   }
   
   return 0;
}
