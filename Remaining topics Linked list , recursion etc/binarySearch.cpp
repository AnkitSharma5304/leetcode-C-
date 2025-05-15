#include<iostream>
using namespace std;
int binarysearch(int arr[], int n, int key){

    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2; // declaring mid this way in order to prevent overflow of no,s 

    while (start<=end){
        if(arr[mid]==key) {
        return mid;

    }
    // to access right wala part 
    if(key>=arr[mid]){
        start=mid+1;

    }
    else {
        end = mid-1;  

    }
    mid=start+(end-start)/2;

}

    return -1;

}
 int main(int argc, char const *argv[])
 {   int key;

    int even[6]={2,4,6,8,12,18};
    int odd[5]={1,3,5,9,13};
    
int index=binarysearch(even , 6, 12); 
cout<<"index of 12 is : "<< index<<endl;
int index2=binarysearch(odd,5,13);
cout<<"index of 13 is : "<<index2<<endl;

    return 0;
 }
 