#include<iostream>
using namespace std;

void parray(int arr[] , int n , int i ){
    if(i>=n){
        return;
    }
   
cout<<arr[i]<<"->";
 parray(arr, n , ++i);
 
}

void printarray(int arr[] , int n){
    if (n==0){
        return;

    }
    else {
        cout<<arr[0]<<endl;

        return printarray(arr+1 , n-1);
    }
}
int main(int argc, char const *argv[])
{
    int arr[5]={2,4,5,6,7};
    printarray(arr , 5);
   cout<<endl;
   parray(arr , 5 ,0);
    return 0;
}
