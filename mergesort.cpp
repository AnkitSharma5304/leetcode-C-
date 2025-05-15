#include<iostream>
using namespace std;
void conquer(int arr[] , int si , int mid ,int ei){
    int merged[ei-si+1];
    int idx1=si;
    int idx2=mid+1;
    int x=0;
while (idx1<=mid && idx2<=ei)
{
    if(arr[idx1]<=arr[idx2]){
        merged[x++]=arr[idx1++];
    }
    else{
        merged[x++]=arr[idx2++];
    }
}
while(idx1<=mid){
    merged[x++]=arr[idx1++];
}
while(idx2<=ei){
    merged[x++]=arr[idx2++];
}
for(int i=0 , j=si ; i<sizeof(merged)/sizeof(int) ; i++,j++){// this is the way to find size of a static array /
    arr[j]=merged[i];
}
}
void divide(int arr[] , int si, int ei){
    if(si==ei){
        return;
    }
    int mid=si+(ei-si)/2;
    divide(arr,si,mid);
    divide(arr,mid+1,ei);
    conquer(arr,si,mid,ei);

}

int main(){
     int arr[]={6,5,4,3,2,1};
     int n=6;
     divide(arr,0,n-1);
     for(int i=0 ; i<n ; i++){
        cout<<(arr[i])<<" ";

     }
     cout<<endl;
    return 0;
}
//DETAILED EXPLANATION
// Sure, let's delve into how the divide(arr, si, mid); divide(arr, mid+1, ei); conquer(arr, si, mid, ei); part of the code works. This is essentially the core of the merge sort algorithm, which divides the array into smaller parts, sorts them, and then merges them back together.

// 1. divide(arr, si, mid);
// This line calls the divide function recursively on the first half of the array, from the starting index si to the midpoint mid.

// 2. divide(arr, mid+1, ei);
// This line calls the divide function recursively on the second half of the array, from the midpoint mid+1 to the ending index ei.

// 3. conquer(arr, si, mid, ei);
// This line calls the conquer function, which merges the two sorted halves back together into a single sorted array.

// How It Works in Detail
// Divide Step:

// The divide function splits the array into two halves until each subarray contains only one element.
// The base case of the recursion is when si is equal to ei, which means the subarray has only one element and is therefore already sorted.
// Recursive Division:

// The first call to divide(arr, si, mid) processes the left half of the array.
// The second call to divide(arr, mid+1, ei) processes the right half of the array.
// Merge Step:

// After both recursive calls to divide have processed and sorted the two halves, the conquer function merges these two sorted halves into a single sorted array.
// The conquer function uses two pointers (idx1 and idx2) to traverse the two halves and a temporary array merged to store the merged result.
// The elements are compared and merged in sorted order, and finally, the merged array is copied back into the original array arr in the correct positions.
// Example Execution
// Let's consider the example array {6, 5, 4, 3, 2, 1}:

// Initial Call:

// divide(arr, 0, 5) is called.
// The midpoint is calculated as mid = 0 + (5-0)/2 = 2.
// First Level of Recursion:

// divide(arr, 0, 2) is called for the left half.
// Midpoint: mid = 0 + (2-0)/2 = 1.
// divide(arr, 3, 5) is called for the right half.
// Midpoint: mid = 3 + (5-3)/2 = 4.
// Second Level of Recursion:

// For divide(arr, 0, 2):
// divide(arr, 0, 1) and divide(arr, 2, 2) are called.
// For divide(arr, 0, 1):
// divide(arr, 0, 0) and divide(arr, 1, 1) are called. Both reach the base case (single element arrays).
// conquer(arr, 0, 0, 1) merges {6} and {5} into {5, 6}.
// conquer(arr, 0, 1, 2) merges {5, 6} and {4} into {4, 5, 6}.
// For divide(arr, 3, 5):
// divide(arr, 3, 4) and divide(arr, 5, 5) are called.
// For divide(arr, 3, 4):
// divide(arr, 3, 3) and divide(arr, 4, 4) are called. Both reach the base case (single element arrays).
// conquer(arr, 3, 3, 4) merges {3} and {2} into {2, 3}.
// conquer(arr, 3, 4, 5) merges {2, 3} and {1} into {1, 2, 3}.
// Final Merge:

// conquer(arr, 0, 2, 5) merges {4, 5, 6} and {1, 2, 3} into the final sorted array {1, 2, 3, 4, 5, 6}.
// Summary
// The divide function recursively splits the array into smaller parts until each part has only one element. The conquer function then merges these parts back together in sorted order. The process continues until the entire array is sorted.