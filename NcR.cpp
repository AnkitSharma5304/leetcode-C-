#include<iostream>
using namespace std;
int factorial(int n){

    if((n==0)||(n==1)){
        return 1;

    }
    else {
        return n*factorial(n-1);
    }
}
int combination(int n, int r){
    int index= n;
    int index1=r;
    return factorial(index)/(factorial(index-index1)*factorial(index1));
}
int main(int argc, char const *argv[])
{   int n,r;
    cout<<"enter n,r"<<endl;
    cin>>n>>r;
   cout<<"the combination is:"<<combination(n,r)<<endl;
   

    return 0;
}
