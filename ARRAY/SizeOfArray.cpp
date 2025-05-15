#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4};
    cout<<sizeof(arr)/sizeof(arr[0])<<endl;
    return 0;
}
