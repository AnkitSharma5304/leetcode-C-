#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a ,b,c;
    cout<<"enter a and b"<<endl ;//if expression after endl is empty do not use << this thing 
   cin>>a>>b;
    c=b;
    b=a;
    a=c;
    cout<<"the value of a is :"<<a<<endl;
    cout<<"the value of b is :"<<b<<endl;
    



    return 0;
}
