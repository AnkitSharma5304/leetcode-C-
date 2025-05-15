#include<iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    int num;
    cin>>num;
    string ans="";

    int arr[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    string str[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

     for(int i=0 ; num!=0 ; i++){
        while(arr[i]<=num)
       {
            
         num=num-arr[i];
        ans=ans+str[i];
     }
     }
      cout<<ans<<endl;


    return 0;
}
