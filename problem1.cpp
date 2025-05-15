#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) // printing the duplicate number 
{
    int arr[5];
    cout<<"enter array elements "<<endl;

    for(int i=0; i<5;i++){
        cin>>arr[i];

    }
    cout<<endl;
    cout<<"the element which is duplicate is :"<<" ";


    for(int i=1; i<5;i++){
        for(int j=i+1;j<5;j++){ // you can use j=i+1 simply
        if(arr[j]==arr[i]){
            cout<<arr[i]<<" ";
            break;
            
           }   }
    }

              
    return 0;
}
