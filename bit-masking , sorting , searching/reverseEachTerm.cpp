#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[5];
    int i,j,n,s;
    cout<<"enter the elements of the array"<<endl;
    for(i=0; i<5;i++){
        cin>>arr[i];
    }
    cout<<"the elements after reversing are:"<<endl;
      
      for(j=0; j<5;j++) {
        n=arr[j];
        s=0;
        while(n>0){
         int digit=n%10;
         s=s*10+digit;
         n=n/10;        
        }
cout<<s<<endl;
      }
    return 0;
}
