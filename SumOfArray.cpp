#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,5,7,9,10,12};
    int sum=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<size;i++){
        sum=sum+arr[i];

    }
    cout<<"the sum of the array is :"<<sum<<endl;

    return 0;
}
