#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[5];
    for(int i=0; i<5;i++){
        cout<<"enter element "<<i<<endl;
        cin>>arr[i];

    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    int t;
    for(int j=4, i=0;j>=0&&i<5;j--,i++){
        t=arr[j];
        arr[j]=arr[i];
        arr[i]=t;

    }
    for(int i=0; i<5;i++){
        cout<<"the element is "<<arr[i]<<endl;
    }
    return 0;
}
