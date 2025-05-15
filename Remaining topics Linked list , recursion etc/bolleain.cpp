#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    bool exp1=true;
    bool exp2=false;
    cout<<(exp1||exp2)<<endl;// dont forget brackets 
    cout<<(exp1&&exp2)<<endl;// dont forget brackets 
    cout<<(!exp1)<<endl;
    cout<<(!exp2)<<endl;

    return 0;
}
