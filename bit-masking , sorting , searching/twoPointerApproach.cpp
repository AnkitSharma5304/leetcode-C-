#include<iostream>// given a sorted array , we have to find the pair having sum equal to target sum
using namespace std;
int main(int argc, char const *argv[])
{   int arr[7]={1,3,4,6,7,8,9};
    int i=0;
    int j=6;
    int target=5;
    while(i<j){
        if(arr[i]+arr[j]==target){
            cout<<"the pair is:"<<arr[i]<<endl;
            cout<<"the second pair is:"<<arr[j]<<endl;
            break;
        }
        else if(arr[i]+arr[j]>target){
            j--;

        }
        else if(arr[i]+arr[j]<target){

            i++;
        }
    }

    return 0;
}
