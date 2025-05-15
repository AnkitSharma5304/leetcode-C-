#include<iostream>
using namespace std;
int bs(int a[], int low , int high , int x){
  
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==x){
            return mid;
        }
        else if(a[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
   return -1;
}
int expSearch(int a[], int x , int n ){ // a is the sorted array , x is the element we are trying to find , n is number of elements in the array 
    if(a[0]==x){
        return 0;
    }
       int i=1;
       while(i<=n && a[i]<=x){
          i=i*2;

       }
       return bs(a, i , min(i*2 , n) , x);
        
    }

int main(int argc, char const *argv[])
{
    int a[] = {12,34,56,43,87,98,90,13,16};
    int n=sizeof(a)/sizeof(int);
    int x=87;
    int ans=expSearch(a,x,n);
    cout<<ans<<endl;
    return 0;
}
