#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;//number of workers 
     cin>>n;
     vector<int>days[n];// number of days in which the worker works
     for(int i=0 ; i<n ; i++){
        int num_workers;
        cin>>num_workers;
        for(int j=0 ; j<num_workers ; j++){
            int day;
            cin>>day;
            days[i].push_back(day);
        }
     }
     for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            //days[i] , days[j]
           
        }
     }
     //O(n^2 * 30)
    return 0;
}