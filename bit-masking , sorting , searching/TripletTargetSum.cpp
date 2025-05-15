#include<iostream>
using namespace std; // calculate the no. of pairs of triplet equal to given sum 
int main(int argc, char const *argv[])
{
    int arr[6];
    int target, count=0;
    cout<<"enter elements of the array"<<endl;

    for(int i=0; i<6;i++){
        cin>>arr[i];
    }
    cout<<endl;

    cout<<"enter target sum";
    cin>>target;

    for(int i=0; i<6; i++){
        for(int j=i+1 ; j<6; j++){
            for(int k=j+1; k<6;k++){
                if(arr[i]+arr[j]+arr[k]==target)
                count++;
            }
        }
    }
    cout<<"the pairs for given target sum are :"<<count<<endl;
    
    return 0;
}
