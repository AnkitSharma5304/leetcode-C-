#include<iostream>
#include<unordered_map>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[7];
    cout<<"enter the elements of the array"<<endl;

    for(int i=0 ; i<7 ;i++){
        cin>>arr[i];
    }
    
    unordered_map<int,int>hash;
    for(int i=0 ; i<7 ;i++){
        hash[arr[i]]++;
    }
    for(int i=0 ; i<7 ;i++){
        if(hash[arr[i]]>1){
            cout<<"the index is "<<i<<endl;
        }
       
    }
    return 0;
}
