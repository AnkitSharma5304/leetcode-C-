#include<iostream>
using namespace std;
int factorial(int n){
    if ((n==0)||(n==1))
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
int main(int argc, char const *argv[])
{   int n;

    cout<<"enter the number whose factorial you want to calculate "<<endl;
    cin>>n;
    cout <<"the factorial is :"<<factorial(n)<<endl;
    

    return 0;
}
