//used to find subarays in an array;
// maximum sum of the subarray using kandane algorithm in O(n) time complexity 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ;i++){
        cin>>arr[i];
    }
int sum=0;
int maxi=arr[0];
for(int i=0 ; i<n ; i++){
    sum=sum+arr[i];
    maxi=max(maxi,sum);
    if(sum<0){
        sum=0;
    }
   
}
cout<<maxi;

    return 0;
}