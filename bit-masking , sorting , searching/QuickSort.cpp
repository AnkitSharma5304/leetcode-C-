#include<iostream>
using namespace std;
int partition(int arr[] , int low , int high){
    int pivot=arr[high];
     int i=low-1;
     for(int j=low  ; j<high ; j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[j] ,arr[i]);

        }
     }
     swap(arr[i+1] , arr[high]);
     return i+1;

}
void quicksort(int arr[] , int low , int high ){
    if(low<=high){
        int pi=partition(arr,low,high);
        quicksort(arr,pi+1,high);
    quicksort(arr,low,pi-1);
    }
}
void printarray(int arr[] , int size){
    for(int i=0 ; i<size ; i++){
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}
int main(){
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printarray(arr, n);

    quicksort(arr, 0, n - 1);

    cout << "Sorted array: ";
    printarray(arr, n);
    return 0;
}