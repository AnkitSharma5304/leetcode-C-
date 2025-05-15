#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> arr(6);
    for(int i=0 ; i<6 ;i++){
        cin>>arr[i];

    }
    // selection sort 
    

    for(int i= 0 ; i<5 ;i++){
        int index=-1;
        int min=INT_MAX;
        for(int j = i ; j<6 ; j++){
             if(arr[j]<min){
                index=j;
             

             }
              swap(arr[index], arr[i]);
        }
      
    }

     for(int i=0 ; i<6 ;i++){
        cout<<arr[i]<<endl;

    }
    
    return 0;
}
