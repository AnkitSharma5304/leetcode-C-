#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[6];
    for(int i=0 ; i<6 ; i++){
        cin>>arr[i];

    }

    //bubble sort 
    for(int i=0 ; i<6 ; i++){
        int index=-1;
        for(int j=0 ; j<6-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);

            }
        }
    }


     for(int i=0 ; i<6 ; i++){
        cout<<arr[i]<<endl;

    }
    
    return 0;
}
