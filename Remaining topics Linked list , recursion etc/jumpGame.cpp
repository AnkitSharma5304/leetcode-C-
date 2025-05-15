#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
    
{
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    vector<int> nums(n);
    cout<<"enter the elements of the array"<<endl;

    for(int i=0 ; i<n ;i++){
        cin>>nums[i];
    }

      for(int i=0 ; i<n ;i++){
        cout<<nums[i]<<' ';
    }
    int reachable = 0;
    for(int i=0 ; i<n ;i++){
        if (reachable < i){
            cout<<"false"<<endl;
            exit;
        }
        else  {
            reachable = max(reachable , i+nums[i]);
              cout<<"true";
        }
        
    }
  
    return 0;
}
