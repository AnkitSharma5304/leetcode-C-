#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t ;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       vector<pair<int , int>> v;
       for(int i=0 ; i<n ; i++){
           int x;
           cin>>x;
           
           v.push_back({x,1});
       }
       for(int j=0 ; j<n ; j++){
           int y;
           cin>>y;
           v.push_back({y,0});
       }
       sort(v.begin() , v.end());
       int count=0;
       int ans=0;
       for(auto i: v){
           if(i.second == 1){
               count+=1;
           }
           else{
               count-=1;
           }
           ans=max(count,ans);
       }
       cout<<ans<<endl;
}
return 0;
}