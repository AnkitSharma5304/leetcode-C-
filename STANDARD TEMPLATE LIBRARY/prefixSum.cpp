#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N];
int pf[N]; 
int main(){
    int n;
    cin>>n;
    
      for(int i=0 ; i<n ; i++){
        cin>>a[i];
        pf[i]=pf[i-1]+a[i];
      }
        int t ;
    cin>>t;
      while(t--){
     int l,r;
     long long sum=0;
     cin>>l>>r;
     for(int i=l ; i<=r ; i++){
        sum+=a[i];
     }
     cout<<sum<<endl;
}
return 0;
}