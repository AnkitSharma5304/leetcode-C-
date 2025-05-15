#include<iostream>
using namespace std;
int binarysearch(int arr[], int size, int key ){
    int start=0;
    int end = size-1;
    int mid=start+(end-start)/2;
  while(start<=end){
        if (arr[mid]==key)
      {  return mid;
      }
else if(arr[mid]<=key){
    start=mid+1;

}
else if(arr[mid]>=key){
    end=mid-1;

}
mid=start+(end-start)/2;
}
 return -1;

}
int main(int argc, char const *argv[])
{
    int even[6];
    int odd[7];
    cout<<"enter the elements of even array"<<endl;
    for(int i=0; i<6; i++){
        cin>>even[i];

    }
    cout<<"enter the elements of odd array"<<endl;
    for(int j=0; j<7;j++){
        cin>>odd[j];
}    cout<<"the respective even array is :"<<endl;

        for(int i=0;i<6;i++){
            cout<<even[i]<<" ";


        } cout<<endl;
cout<<"the respective odd array is"<<endl;
for(int j=0; j<7; j++){
    cout<<odd[j]<<" ";

}
cout<<endl;

  
    int index=binarysearch(even, 6, 10);
    cout<<"your key is present at index: "<<index<<endl;
    
    return 0;
}
