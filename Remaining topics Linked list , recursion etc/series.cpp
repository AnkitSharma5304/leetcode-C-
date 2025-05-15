//print the sum of 1-2+3-4+5......
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    int result=0 , sum=0;
    cout<<"enter n";
    cin>>n;
    for (int i=0;i<=n;i++){
     if (i%2==0){// USE i%2
        sum=sum-i;// sum for even ...
     }
     else if (i%2!=0){
     sum=sum+i; // sum for odd ...
     }

    }
     cout<<"the sum is:"<<sum<<endl;
    return 0;
}
