#include<iostream>
using namespace std;
int updatearry(int arr[], int n){
    arr[2]=45;
}
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<"the array is :"<<endl;
    for(int i=0; i<5;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    
    updatearry(arr, 5);
    cout<<"the updated array is "<<endl;
    for(int i=0; i<5;i++){
        cout<<arr[i]<<" ";

    }
    return 0;

}