#include<iostream>
#include<climits>
using namespace std;

int minarr(int arr[], int n){
    int min = INT_MAX;
    for(int i=0 ; i<n ; i++){
        if (arr[i]<min)
        min=arr[i];// VERY IMPORTANT RIGHT SIDE WALE YANI ARRY KO MIN MAE DALNA HAE 

    }
    return min;

}
int maxarr(int arr[],int n){
    int max=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>max)
        max=arr[i];//VERY IMPORTANT RIGHT SIDE WALE YANI ARRY KO MIN MAE DALNA HAE

    }
    return max;

}
int main(){
    int arr[10];
cout<<"enter the elements of the array"<<endl;
for(int i=0 ; i<10;i++){
    cin>>arr[i];

}
cout<<"the maximum value in the array is :"<< maxarr(arr,10)<<endl;
cout<<"the minimum value of the array is :"<< minarr(arr,10)<<endl;

return 0;
}