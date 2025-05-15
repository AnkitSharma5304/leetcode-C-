#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{   int n=6;
    cout<<"enter n"<<endl;
      
    cin>>n;
    vector<int> arr(6);

     cout<<"the unsorted array is:"<<endl;
     for(int i= 0; i<n;i++){
    cin>>arr[i];
     }
      for(int i= 0; i<n;i++){
    cout<<arr[i]<<" ";
      }
    for(int i=0 ;i<n-1;i++){
        int min=INT_MAX;
        int minidx=-1;
        for(int j=i; j<n;j++){
            if(arr[j]<min){
                min=arr[j];// update after each iteration
                minidx=j;
            }

        }
        swap(arr[minidx], arr[i]);
    }
  cout<<"array after selection sort :"<<endl;
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
  
    return 0;
}
