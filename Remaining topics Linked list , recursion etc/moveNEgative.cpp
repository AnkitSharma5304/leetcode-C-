#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[5]={1,9,-4,-6,5};
    int crr[5];
    int count =0;
    for(int i=0 ; i<5;i++){
        if(arr[i]<0){
            crr[i]=arr[i];
           count++;
        }
    }
    for(int j=0 ; j<5; j++){
        if(arr[j]>0){
            crr[j+count]=arr[j];
        }
    }
    for(int k=0;k<5;k++){
        cout<<crr[k]<<" ";
    }
    return 0;
}
