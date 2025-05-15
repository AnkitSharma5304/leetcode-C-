#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int>& arr , int n){
    for(int i=0 ; i<n-1; i++){
        for(int j=0 ; j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
int main(int argc, char const *argv[])
{  int n;
cout<<"enter n"<<endl;
cin>>n;
vector<int> arr(n);//int arr[n];//initialize vector in place of an array
cout<<"enter the values of the array"<<endl;
  for(int i=0 ;i<n ;i++){
    cin>>arr[i];

  }
  bubbleSort(arr, n);
  for(int i=0 ;i<n ;i++){
    cout<<arr[i]<<" ";

  }

    return 0;
}
