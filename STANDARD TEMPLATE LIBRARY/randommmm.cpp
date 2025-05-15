#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr1={10,20,1};
    vector<int> arr2={30,40,50};
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    int d=5;
    int count=0;
    for(int k:arr1){
      bool isvalid=true;
      for(int k1:arr2){
         if(abs(k-k1)<=d){
            isvalid=false;
         }
      }
      if(isvalid){
         count++;
      }
      
    }
    cout<<count<<endl;

    return 0;
}
