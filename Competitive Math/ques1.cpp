//write a program to print a no. if no. is even and is divisible by 3
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num;
    cout<<"enter number:"<<endl;
    cin>>num;
    if ((num%2==0)&&(num%3==0)){
        cout<<"the number is even and divisible by 3: "<<num<<endl;

    }
    else{
        cout<<"the no. is not even ";
    }
    return 0;
}
