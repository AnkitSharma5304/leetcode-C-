#include<iostream>
using namespace std;
void reversearray(int arr[], int n){
    int newarray[n];
    for(int i=0 ; i<n; i++){
       newarray[i]=arr[n-i-1];

    }
    cout<<"the reversed array is :"<<endl;
    for(int j=0;j<n; j++){
        cout<<newarray[j]<<" ";
    }
}
int main(int argc, char const *argv[])
{
    int  n;
    cout<<"enter n"<<endl;
       cin>>n;
    cout<<"enter the elements in the array"<<endl;
    
 
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    

    reversearray(arr, n);
    return 0;
}
