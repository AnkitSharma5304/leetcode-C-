#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int digit ;
    int index;
    int num=0;
    cout<<"enter digit"<<endl;
    cin>>digit;

    while(digit){
    index=digit%2;
    num=num*10+index;
    digit=digit/2;

    }
    cout<<num;
    return 0;
}
