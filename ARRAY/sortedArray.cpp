#include<iostream> // find if a array is sorted or not 
#include<vector>
using namespace std ;
int main(int argc, char const *argv[])
{
    int arr[5];
    cout<<"enter the elements of the array";
    for(int i=0;i<5;i++){
        cin>>arr[i];

    } 
    cout<<"the given elements of the array are";

    for(int i=0;i<5;i++){
        cout<<arr[i];
    cout<<" ";
    }
    cout<<endl;

   bool flag=true;
   for(int i=1; i<5;i++){
    if (arr[i]<arr[i-1]){
        flag=false;// search for false condition such that jaha pe bhi false aaye wha break kr do 

    }
    break;


   }
   cout<<flag<<endl;

    
    return 0;
}
